#if defined(__CLING__)
#include "AliMCWeightsTask.h"
#else
enum MCGeneratorType {
    NONE=-1,
    PP_PYTHIA=0,
    PP_PYTHIA_OLD,
    PPB_EPOS,
    PBPB_HIJING,
};
#endif

AliMCWeightsTask* AddTask_MCWeights(MCGeneratorType gen = MCGeneratorType::NONE, const char* collType = "pp", bool bUseMBPP = false) {
    return AliMCWeightsTask::AddTaskAliMCWeightsTask(gen, collType, bUseMBPP);
}
