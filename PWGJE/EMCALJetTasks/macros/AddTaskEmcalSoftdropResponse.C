PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalSoftDropResponse * AddTaskEmcalSoftdropResponse(Double_t jetradius, AliJetContainer::EJetType_t jettype, AliJetContainer::ERecoScheme_t recombinationScheme, const char *namepartcont, const char *trigger) {
    return PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalSoftDropResponse::AddTaskEmcalSoftDropResponse(jetradius, jettype, recombinationScheme, namepartcont, trigger);
}
