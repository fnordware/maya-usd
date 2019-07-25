//
// Copyright 2017 Animal Logic
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.//
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#include "AL/usdmaya/StageData.h"
#include "AL/usdmaya/TypeIDs.h"
#include "AL/usdmaya/DebugCodes.h"
#include "AL/maya/event/MayaEventManager.h"

namespace AL {
namespace usdmaya {

const MTypeId StageData::kTypeId(AL_USDMAYA_STAGEDATA);
const MString StageData::kName("AL_usdmaya_StageData");


//----------------------------------------------------------------------------------------------------------------------
void* StageData::creator()
{
  return new StageData;
}

//----------------------------------------------------------------------------------------------------------------------
StageData::StageData() : ParentClass()
{
  TF_DEBUG(ALUSDMAYA_EVALUATION).Msg("StageData::StageData() created: %p\n", this);
}

//----------------------------------------------------------------------------------------------------------------------
StageData::~StageData()
{
  TF_DEBUG(ALUSDMAYA_EVALUATION).Msg("StageData::StageData() deleted: %p\n", this);
}


//----------------------------------------------------------------------------------------------------------------------
MTypeId StageData::typeId() const
{
  return kTypeId;
}

//----------------------------------------------------------------------------------------------------------------------
MString StageData::name() const
{
  return kName;
}
}
//----------------------------------------------------------------------------------------------------------------------
} // al
//----------------------------------------------------------------------------------------------------------------------