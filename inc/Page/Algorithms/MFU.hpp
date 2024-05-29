#pragma once

#include "PageAlgorithm.hpp"

class MFU : public  PageAlgorithm
{
  public:
	//Override PageAlgorithm
	void startAlgorithm(std::vector<Page>& pages, std::string& fileToSaveOutput, size_t capacity) override;

};
