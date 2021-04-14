#import <HealthKit/HKConceptIdentifier.h>
#import <HealthKit/_HKDeepBreathingSessionConfiguration.h>
#import <HealthKit/HKWorkoutBuilder.h>
#import <HealthKit/HKWorkoutBuilderConfiguration.h>
#import <HealthKit/HKFeatureAvailabilityDatabaseInaccessibilityCache.h>
#import <HealthKit/HKCodedValue.h>
#import <HealthKit/HKClinicalGateway.h>
#import <HealthKit/HKMedicationDispenseRecord.h>
#import <HealthKit/HKRemoteFeatureAvailabilityWatchProductTypeHasPrefixRule.h>
#import <HealthKit/HKDeletedObject.h>
#import <HealthKit/HKMedicationOrder.h>
#import <HealthKit/_HKClinicalRecordComparisonFilter.h>
#import <HealthKit/HKObserverSet.h>
#import <HealthKit/_HKObserverRecord.h>
#import <HealthKit/HKPluginLoader.h>
#import <HealthKit/HKHealthStoreConfiguration.h>
#import <HealthKit/HKMedicalCodingSystem.h>
#import <HealthKit/HKWorkoutRoute.h>
#import <HealthKit/_HKMedicalRecordComparisonFilter.h>
#import <HealthKit/HKRemoteFeatureAvailabilityActiveWatchElectrocardiogramVersionGreaterThanRule.h>
#import <HealthKit/HKCodedQuantity.h>
#import <HealthKit/HKCumulativeQuantitySample.h>
#import <HealthKit/HKHeartRateSummaryQuery.h>
#import <HealthKit/HKNanoSyncControl.h>
#import <HealthKit/_HKWorkoutObserver.h>
#import <HealthKit/HKHealthStore.h>
#import <HealthKit/_HKFitnessMachineConnectionInitiator.h>
#import <HealthKit/HKAccountOwner.h>
#import <HealthKit/HKRemoteFeatureAvailabilityWatchOSBuildVersionEqualsRule.h>
#import <HealthKit/HKUnknownRecordType.h>
#import <HealthKit/_HKXPCAuditToken.h>
#import <HealthKit/_HKSleepQueryResult.h>
#import <HealthKit/HKRemoteFeatureAvailabilityElectrocardiogramOnboardingCountryCodeRule.h>
#import <HealthKit/HKSortedSampleArray.h>
#import <HealthKit/HKECGAvailabilityResult.h>
#import <HealthKit/HKMedicationOrderType.h>
#import <HealthKit/HKConcept.h>
#import <HealthKit/HKAllergyRecordType.h>
#import <HealthKit/HKProxyProvider.h>
#import <HealthKit/HKSleepSchedule.h>
#import <HealthKit/HKSynchronousObserverSet.h>
#import <HealthKit/HKCloudSyncShareParticipantManager.h>
#import <HealthKit/HKHealthStoreIdentifier.h>
#import <HealthKit/HKCurrentActivityCacheQuery.h>
#import <HealthKit/HKCurrentActivityCacheQueryServerConfiguration.h>
#import <HealthKit/_HKSleepQueryResultBuilder.h>
#import <HealthKit/HKGymKitDataSource.h>
#import <HealthKit/HKQuantity.h>
#import <HealthKit/_HKAppURLSpecification.h>
#import <HealthKit/_HKXMLValidator.h>
#import <HealthKit/_HKValidationErrorTracker.h>
#import <HealthKit/_HKTaskCompletionCounter.h>
#import <HealthKit/_HKZipArchiveExtractor.h>
#import <HealthKit/HKPendingOperationRecord.h>
#import <HealthKit/HKRetryableOperation.h>
#import <HealthKit/_HKEntitlements.h>
#import <HealthKit/HKConceptStore.h>
#import <HealthKit/HKOnboardingCompletion.h>
#import <HealthKit/HKConceptStoreServerConfiguration.h>
#import <HealthKit/HKAccountOwnerType.h>
#import <HealthKit/HKHeartRateSummaryReading.h>
#import <HealthKit/_HKArchiveCreator.h>
#import <HealthKit/HKCodedValueCollection.h>
#import <HealthKit/HKCodableCondensedWorkoutCollection.h>
#import <HealthKit/HKHeartbeatSeriesBuilder.h>
#import <HealthKit/HKObject.h>
#import <HealthKit/HKBadge.h>
#import <HealthKit/HKDevice.h>
#import <HealthKit/HKRemoteFeatureAvailabilityWatchOSVersionGreaterThanRule.h>
#import <HealthKit/HKRemoteFeatureAvailabilityCompoundRule.h>
#import <HealthKit/HKHeartbeatSeriesQuery.h>
#import <HealthKit/HKMedicalCodingCollection.h>
#import <HealthKit/HKCodableQuantitySeries.h>
#import <HealthKit/HKSleepAnalysis.h>
#import <HealthKit/HKTokenKeychainItem.h>
#import <HealthKit/HKSampleQuery.h>
#import <HealthKit/_HKSampleQueryConfiguration.h>
#import <HealthKit/HKConceptAttribute.h>
#import <HealthKit/HKRegionAvailability.h>
#import <HealthKit/HKRegionAvailabilityComparator.h>
#import <HealthKit/HKAuthorizationStore.h>
#import <HealthKit/_HKDiscreteQuantitySampleComparisonFilter.h>
#import <HealthKit/HKDiscreteQuantitySample.h>
#import <HealthKit/HKObjectAuthorizationPromptSession.h>
#import <HealthKit/_HKTimePeriod.h>
#import <HealthKit/HKClinicalRecord.h>
#import <HealthKit/_HKDateRangeQuery.h>
#import <HealthKit/HKPersistentTimer.h>
#import <HealthKit/HKQuantitySeriesSampleBuilder.h>
#import <HealthKit/HKQuantitySeriesSampleBuilderTaskServerConfiguration.h>
#import <HealthKit/HKFHIRIdentifier.h>
#import <HealthKit/HKHealthService.h>
#import <HealthKit/HKBloodTypeObject.h>
#import <HealthKit/HKBiologicalSexObject.h>
#import <HealthKit/HKFitzpatrickSkinTypeObject.h>
#import <HealthKit/HKWheelchairUseObject.h>
#import <HealthKit/HKActivityMoveModeObject.h>
#import <HealthKit/HKCardioFitnessMedicationsUseObject.h>
#import <HealthKit/HKRemoteFeatureAvailabilityActiveWatchAtrialFibrillationDetectionVersionGreaterThanRule.h>
#import <HealthKit/_HKCFGNode.h>
#import <HealthKit/_HKCFGNonTerminalNode.h>
#import <HealthKit/_HKCFGTerminalNode.h>
#import <HealthKit/_HKCFGEmptyStringNode.h>
#import <HealthKit/_HKCFGNodeCache.h>
#import <HealthKit/_HKCFGParseContext.h>
#import <HealthKit/_HKCFGExpression.h>
#import <HealthKit/_HKCFGReplacementRule.h>
#import <HealthKit/_HKCFGNonTerminal.h>
#import <HealthKit/_HKCFGTerminal.h>
#import <HealthKit/_HKCFGStringTerminal.h>
#import <HealthKit/_HKCFGCharacterTerminal.h>
#import <HealthKit/_HKCFGIntegerTerminal.h>
#import <HealthKit/_HKCFGDoubleTerminal.h>
#import <HealthKit/_HKCFGCharacterSequenceTerminal.h>
#import <HealthKit/_HKContextFreeGrammar.h>
#import <HealthKit/HKObserverQuery.h>
#import <HealthKit/_HKObserverQueryServerConfiguration.h>
#import <HealthKit/HKDaemonTransaction.h>
#import <HealthKit/HKWorkoutDataSourceConfiguration.h>
#import <HealthKit/HKCloudSyncObserverStatus.h>
#import <HealthKit/HKCloudSyncObserver.h>
#import <HealthKit/HKCDADocumentSample.h>
#import <HealthKit/HKCDADocument.h>
#import <HealthKit/_HKCDADocumentExtractedFields.h>
#import <HealthKit/HKQuerySortConstraint.h>
#import <HealthKit/HKCodableQuantitySeriesEnumerationResultCollection.h>
#import <HealthKit/HKWorkoutControl.h>
#import <HealthKit/HKHealthWrapMessageConfiguration.h>
#import <HealthKit/HKHealthWrapMessage.h>
#import <HealthKit/HKRemoteFeatureAvailabilityWatchRegionEqualsRule.h>
#import <HealthKit/HKMedicalRecordsStore.h>
#import <HealthKit/HKSource.h>
#import <HealthKit/HKStatisticsQuery.h>
#import <HealthKit/_HKStatisticsQueryServerConfiguration.h>
#import <HealthKit/HKHealthWrapCodableMessageKey.h>
#import <HealthKit/_HKBooleanFilter.h>
#import <HealthKit/HKReferenceRange.h>
#import <HealthKit/_HKFitnessFriendActivitySnapshot.h>
#import <HealthKit/HKWorkoutRouteQuery.h>
#import <HealthKit/_HKWorkoutRouteQueryServerConfiguration.h>
#import <HealthKit/HKNanoRegistryDeviceUtility.h>
#import <HealthKit/HKElectrocardiogramActiveAlgorithmVersion.h>
#import <HealthKit/HKProductVersions.h>
#import <HealthKit/_HKSampleTypeQuery.h>
#import <HealthKit/HKQuery.h>
#import <HealthKit/HKQueryServerConfiguration.h>
#import <HealthKit/_HKElectrocardiogramComparisonFilter.h>
#import <HealthKit/HKHeartRhythmOnboardingHistory.h>
#import <HealthKit/HKAuthorizationPresentationRequest.h>
#import <HealthKit/_HKDelayedOperation.h>
#import <HealthKit/HKAuthorizationRequestRecord.h>
#import <HealthKit/HKDateIntervalTree.h>
#import <HealthKit/HKClinicalProviderSearchResult.h>
#import <HealthKit/HKSleepAnalysisUtilities.h>
#import <HealthKit/HKProcedureRecordType.h>
#import <HealthKit/HKMetadataValidationUtilities.h>
#import <HealthKit/HKDiagnosticTestResultType.h>
#import <HealthKit/HKQuantitySeriesSampleQuery.h>
#import <HealthKit/_HKQuantitySeriesSampleQueryServerConfiguration.h>
#import <HealthKit/HKHealthWrapCodableMessageHeader.h>
#import <HealthKit/HKRatioValue.h>
#import <HealthKit/HKInspectableValue.h>
#import <HealthKit/HKHealthRecordsStore.h>
#import <HealthKit/_HKBackgroundObservationExtensionRemoteContext.h>
#import <HealthKit/HKWorkoutCondenserControl.h>
#import <HealthKit/HKDatabaseControl.h>
#import <HealthKit/HKAnchoredObjectQuery.h>
#import <HealthKit/_HKAnchoredObjectQueryServerConfiguration.h>
#import <HealthKit/HKMedicalRecord.h>
#import <HealthKit/HKMultiTypeQueryCursor.h>
#import <HealthKit/HKElectrocardiogramBuilder.h>
#import <HealthKit/HKQueryAnchor.h>
#import <HealthKit/HKStaticSyncControl.h>
#import <HealthKit/HKNonMPNDeviceRegionFeatureSupportedStateProvider.h>
#import <HealthKit/HKTaskServerProxyProvider.h>
#import <HealthKit/HKRemoteFeatureAvailabilityWatchOSVersionEqualsRule.h>
#import <HealthKit/_HKHeartRateRecoveryQueryUtility.h>
#import <HealthKit/_HKDimension.h>
#import <HealthKit/_HKBaseDimension.h>
#import <HealthKit/_HKCompoundDimension.h>
#import <HealthKit/HKActivitySummaryQuery.h>
#import <HealthKit/HKActivitySummaryQueryServerConfiguration.h>
#import <HealthKit/HKSourceStore.h>
#import <HealthKit/HKRemoteFeatureAvailabilityAtrialFibrillationOnboardingCountryCodeRule.h>
#import <HealthKit/HKWorkoutBuilderSampleQuery.h>
#import <HealthKit/_HKWorkoutBuilderSampleQueryConfiguration.h>
#import <HealthKit/HKUCUMUnitDisplayConverter.h>
#import <HealthKit/HKCumulativeQuantitySeriesSample.h>
#import <HealthKit/HKStateMachinePendingEvent.h>
#import <HealthKit/HKStateMachineState.h>
#import <HealthKit/HKStateMachineTransition.h>
#import <HealthKit/HKStateMachine.h>
#import <HealthKit/HKWorkoutConfiguration.h>
#import <HealthKit/HKConditionRecordType.h>
#import <HealthKit/HKHealthRecordsIngestionPerAccountOutcome.h>
#import <HealthKit/HKDateInterval.h>
#import <HealthKit/HKDeviceStore.h>
#import <HealthKit/HKClinicalBrand.h>
#import <HealthKit/HKRemoteFeatureAvailabilityBaseRule.h>
#import <HealthKit/HKRemoteFeatureAvailabilityAlwaysTrueRule.h>
#import <HealthKit/HKRemoteFeatureAvailabilityAlwaysFalseRule.h>
#import <HealthKit/HKChartableCodedQuantity.h>
#import <HealthKit/HKElectrocardiogramVoltageMeasurement.h>
#import <HealthKit/HKElectrocardiogramQuery.h>
#import <HealthKit/HKRemoteFeatureAvailabilityActiveWatchAtrialFibrillationDetectionVersionLessThanRule.h>
#import <HealthKit/HKMedicalIDStore.h>
#import <HealthKit/_HKQueryUtilities.h>
#import <HealthKit/HKSemanticDate.h>
#import <HealthKit/HKActiveWatchRemoteFeatureAvailabilityDataSource.h>
#import <HealthKit/HKConceptIndexKeyPath.h>
#import <HealthKit/HKConceptIndexUtilities.h>
#import <HealthKit/HKIndexableObject.h>
#import <HealthKit/HKElectrocardiogramSession.h>
#import <HealthKit/HKElectrocardiogramSessionConfiguration.h>
#import <HealthKit/HKElectrocardiogramSessionTaskConfiguration.h>
#import <HealthKit/HKHealthServiceDiscovery.h>
#import <HealthKit/HKHealthServiceSession.h>
#import <HealthKit/HKCodableQuantitySeriesDatum.h>
#import <HealthKit/_HKFitnessMachineConnection.h>
#import <HealthKit/HKHealthStoreProvider.h>
#import <HealthKit/HKRemoteFeatureAvailabilityWatchOSBuildVersionGreaterThanRule.h>
#import <HealthKit/HKPluginProxyProvider.h>
#import <HealthKit/_HKActivityCacheComparisonFilter.h>
#import <HealthKit/HKMedicationDispenseRecordType.h>
#import <HealthKit/_HKFactorization.h>
#import <HealthKit/_HKMutableFactorization.h>
#import <HealthKit/HKHealthRecordsAccountInfoStore.h>
#import <HealthKit/HKDiagnosticTestReportType.h>
#import <HealthKit/HKAvailableRegions.h>
#import <HealthKit/HKRegionAvailabilityMasks.h>
#import <HealthKit/HKFeatureAvailabilityStoreServerConfiguration.h>
#import <HealthKit/HKTaskConfiguration.h>
#import <HealthKit/HKJSONValidator.h>
#import <HealthKit/HKCSVParser.h>
#import <HealthKit/HKCoverageRecordType.h>
#import <HealthKit/HKDiagnosticTestResult.h>
#import <HealthKit/HKSampleQueryDescription.h>
#import <HealthKit/HKSeriesBuilder.h>
#import <HealthKit/HKMedicationDosage.h>
#import <HealthKit/_HKFitnessMachineSessionConfiguration.h>
#import <HealthKit/HKECGAvailabilityEngine.h>
#import <HealthKit/_HKDeepBreathingSession.h>
#import <HealthKit/HKLiveWorkoutDataSource.h>
#import <HealthKit/HKHeartbeatSequenceSample.h>
#import <HealthKit/_HKCategorySampleComparisonFilter.h>
#import <HealthKit/HKContributor.h>
#import <HealthKit/HKObjectType.h>
#import <HealthKit/HKQuantityType.h>
#import <HealthKit/HKCategoryType.h>
#import <HealthKit/HKCharacteristicType.h>
#import <HealthKit/HKCorrelationType.h>
#import <HealthKit/HKDocumentType.h>
#import <HealthKit/HKWorkoutType.h>
#import <HealthKit/HKSeriesType.h>
#import <HealthKit/HKActivitySummaryType.h>
#import <HealthKit/HKAudiogramSampleType.h>
#import <HealthKit/HKElectrocardiogramType.h>
#import <HealthKit/HKSampleType.h>
#import <HealthKit/HKHeartbeatSequenceSampleType.h>
#import <HealthKit/_HKActivityStatisticsQuery.h>
#import <HealthKit/_HKActivityStatisticsQueryServerConfiguration.h>
#import <HealthKit/HKMultiTypeSampleIterator.h>
#import <HealthKit/HKRemoteFeatureAvailabilityWatchModelNumberHasPrefixRule.h>
#import <HealthKit/HKWorkoutSession.h>
#import <HealthKit/HKWorkoutSessionTaskConfiguration.h>
#import <HealthKit/HKStatistics.h>
#import <HealthKit/_HKSampleQueryResult.h>
#import <HealthKit/_HKCurrentActivitySummaryQuery.h>
#import <HealthKit/_HKCurrentActivitySummaryQueryServerConfiguration.h>
#import <HealthKit/HKCloudSyncControl.h>
#import <HealthKit/HKMedicalType.h>
#import <HealthKit/_HKSampleComparisonFilter.h>
#import <HealthKit/HKDataFlowLink.h>
#import <HealthKit/HKClinicalProviderSearchResultsPage.h>
#import <HealthKit/HKKeyValueDomain.h>
#import <HealthKit/HKKeyValueDomainServerConfiguration.h>
#import <HealthKit/HKFHIRIdentifierElement.h>
#import <HealthKit/HKQuantityDatum.h>
#import <HealthKit/_HKCDADocumentSampleComparisonFilter.h>
#import <HealthKit/HKSeriesSample.h>
#import <HealthKit/HKMedicalDate.h>
#import <HealthKit/HKDiagnosticTestReport.h>
#import <HealthKit/HKChartableCodedQuantitySet.h>
#import <HealthKit/_HKDateCalendarUnitKey.h>
#import <HealthKit/HKSeriesBuilderConfiguration.h>
#import <HealthKit/HKCoverageRecord.h>
#import <HealthKit/HKAudiogramSample.h>
#import <HealthKit/_HKAudiogramDiagnosticSensitivityPoint.h>
#import <HealthKit/HKAudiogramSensitivityPoint.h>
#import <HealthKit/HKDataCollector.h>
#import <HealthKit/HKDataCollectorTaskServerConfiguration.h>
#import <HealthKit/HKDataCollectorCollectionConfiguration.h>
#import <HealthKit/_HKDataCollectorPendingBatch.h>
#import <HealthKit/_HKDataCollectorFlushRequest.h>
#import <HealthKit/HKCodableQuantitySeriesEnumerationResult.h>
#import <HealthKit/_HKCompressionEngine.h>
#import <HealthKit/HKRemoteFeatureAvailabilityWatchOSBuildVersionLessThanRule.h>
#import <HealthKit/HKSampleListDataProviderFilter.h>
#import <HealthKit/HKQuantitySeriesSampleEditor.h>
#import <HealthKit/HKQuantitySeriesSampleEditorTaskServerConfiguration.h>
#import <HealthKit/HKHeartRateSummaryStatisticsBucket.h>
#import <HealthKit/HKActivityCache.h>
#import <HealthKit/HKMedicationRecord.h>
#import <HealthKit/HKRemoteFeatureAvailabilityWatchCompanionDevicePlatformEqualsRule.h>
#import <HealthKit/_HKQuantityDistributionQuery.h>
#import <HealthKit/_HKQuantityDistributionQueryServerConfiguration.h>
#import <HealthKit/_HKQuantityDistributionData.h>
#import <HealthKit/HKEntitlementStore.h>
#import <HealthKit/HKQuantitySample.h>
#import <HealthKit/HKWristDetectionSettingManager.h>
#import <HealthKit/HKFHIRResource.h>
#import <HealthKit/HKEADFFileParser.h>
#import <HealthKit/_HKDateIntervalCollection.h>
#import <HealthKit/_HKMedicalIDData.h>
#import <HealthKit/_HKEmergencyContact.h>
#import <HealthKit/_HKClinicalContact.h>
#import <HealthKit/HKRegionAvailabilityMask.h>
#import <HealthKit/_HKActivitySummaryComparisonFilter.h>
#import <HealthKit/HKHealthRecordsIngestionOutcome.h>
#import <HealthKit/_HKActivityStatisticsQueryResult.h>
#import <HealthKit/HKSourceQuery.h>
#import <HealthKit/_HKFitnessFriendAchievement.h>
#import <HealthKit/_HKFitnessMachine.h>
#import <HealthKit/HKCurrentActivityCacheQueryResult.h>
#import <HealthKit/HKFeatureAvailabilityStore.h>
#import <HealthKit/HKActivitySummary.h>
#import <HealthKit/_HKCurrentWorkoutSnapshot.h>
#import <HealthKit/HKQueryServerProxyProvider.h>
#import <HealthKit/HKWorkoutRouteDataSource.h>
#import <HealthKit/HKWorkoutRouteBuilder.h>
#import <HealthKit/HKXPCEventObserver.h>
#import <HealthKit/HKUnit.h>
#import <HealthKit/_HKCompoundUnit.h>
#import <HealthKit/HKBaseUnit.h>
#import <HealthKit/HKMassUnit.h>
#import <HealthKit/HKLengthUnit.h>
#import <HealthKit/HKVolumeUnit.h>
#import <HealthKit/HKPressureUnit.h>
#import <HealthKit/HKDecibelAWeightedSoundPressureLevelUnit.h>
#import <HealthKit/HKTimeUnit.h>
#import <HealthKit/HKEnergyUnit.h>
#import <HealthKit/HKTemperatureUnit.h>
#import <HealthKit/HKConductanceUnit.h>
#import <HealthKit/HKElectricPotentialDifferenceUnit.h>
#import <HealthKit/HKFrequencyUnit.h>
#import <HealthKit/HKScalarUnit.h>
#import <HealthKit/HKNonConvertibleIUUnit.h>
#import <HealthKit/HKPotentiallyNonConvertibleMassUnit.h>
#import <HealthKit/HKEquivalentsUnit.h>
#import <HealthKit/HKMoleUnit.h>
#import <HealthKit/HKTiterUnit.h>
#import <HealthKit/HKDecibelHearingLevelUnit.h>
#import <HealthKit/_HKComparisonFilter.h>
#import <HealthKit/HKHeartRhythmAvailability.h>
#import <HealthKit/HKRemoteFeatureAvailabilityWatchBuildTypeEqualsRule.h>
#import <HealthKit/HKPPTPluginManager.h>
#import <HealthKit/HKPPT.h>
#import <HealthKit/HKProfileIdentifier.h>
#import <HealthKit/HKHealthWrapCodablePayloadHeader.h>
#import <HealthKit/_HKActivityStatisticsStandHourInfo.h>
#import <HealthKit/_HKActivityStatisticsQuantityInfo.h>
#import <HealthKit/_HKActivityStatisticsWorkoutInfo.h>
#import <HealthKit/HKHeartbeatSeriesSample.h>
#import <HealthKit/HKAllergyReaction.h>
#import <HealthKit/HKInspectableValueCollection.h>
#import <HealthKit/_HKExpiringCompletionTimer.h>
#import <HealthKit/HKSortedQueryAnchor.h>
#import <HealthKit/HKCodableCondensedWorkout.h>
#import <HealthKit/HKHealthWrapCodableKeyValue.h>
#import <HealthKit/HKHealthWrapEncryptor.h>
#import <HealthKit/HKClinicalType.h>
#import <HealthKit/HKGPXExporter.h>
#import <HealthKit/HKStatisticsCollectionQuery.h>
#import <HealthKit/HKStatisticsCollection.h>
#import <HealthKit/_HKStatisticsCollectionQueryServerConfiguration.h>
#import <HealthKit/HKRemoteFeatureAvailabilityActiveWatchElectrocardiogramVersionEqualsRule.h>
#import <HealthKit/_HKXMLExtractor.h>
#import <HealthKit/_HKXMLExtractorElement.h>
#import <HealthKit/_HKXMLExtractorSpecification.h>
#import <HealthKit/HKMultiTypeSampleQuery.h>
#import <HealthKit/_HKMultiTypeSampleQueryServerConfiguration.h>
#import <HealthKit/HKAudioExposureValue.h>
#import <HealthKit/HKAudioExposureUtilities.h>
#import <HealthKit/HKVaccinationRecordType.h>
#import <HealthKit/_HKWheelchairUseCharacteristicCache.h>
#import <HealthKit/HKRemoteFeatureAvailabilityWatchOSVersionLessThanRule.h>
#import <HealthKit/_HKLocationShifter.h>
#import <HealthKit/HKConceptSynthesizer.h>
#import <HealthKit/HKLiveWorkoutBuilder.h>
#import <HealthKit/HKClinicalAccount.h>
#import <HealthKit/HKClinicalAccountLoginCompletionState.h>
#import <HealthKit/HKCorrelationQuery.h>
#import <HealthKit/_HKCorrelationQueryServerConfiguration.h>
#import <HealthKit/HKProfileStore.h>
#import <HealthKit/HKClinicalProvider.h>
#import <HealthKit/HKDocumentSample.h>
#import <HealthKit/_HKWeakObserversMap.h>
#import <HealthKit/_HKXMLTranslator.h>
#import <HealthKit/HKFHIRVersion.h>
#import <HealthKit/HKTableFormatter.h>
#import <HealthKit/_HKQuantitySampleComparisonFilter.h>
#import <HealthKit/HKCoverageClassification.h>
#import <HealthKit/_HKXPCConnection.h>
#import <HealthKit/_HKXPCExportedObjectProxy.h>
#import <HealthKit/_HKConceptIndexableComparisonFilter.h>
#import <HealthKit/HKCorrelation.h>
#import <HealthKit/_HKCorrelationPlaceholder.h>
#import <HealthKit/_HKDiagnosticTestResultComparisonFilter.h>
#import <HealthKit/_HKFitnessFriendWorkout.h>
#import <HealthKit/HKWorkout.h>
#import <HealthKit/HKWorkoutEvent.h>
#import <HealthKit/HKOAuth2Credential.h>
#import <HealthKit/HKSecondaryDevicePairingAgent.h>
#import <HealthKit/HKSecondaryPairedDeviceConfiguration.h>
#import <HealthKit/_HKWorkoutEvent.h>
#import <HealthKit/HKCategorySample.h>
#import <HealthKit/_HKDatabaseChangesQuery.h>
#import <HealthKit/HKSampleTypeChange.h>
#import <HealthKit/_HKDatabaseChangesQueryServerConfiguration.h>
#import <HealthKit/HKConditionRecord.h>
#import <HealthKit/_HKFirstPartyWorkoutSnapshot.h>
#import <HealthKit/_HKMobileAssetDownloadManager.h>
#import <HealthKit/_HKMobileAssetDownloadOperation.h>
#import <HealthKit/HKDiagnosticStore.h>
#import <HealthKit/HKNotificationStore.h>
#import <HealthKit/HKSample.h>
#import <HealthKit/HKSleepPeriodSegment.h>
#import <HealthKit/HKSleepPeriod.h>
#import <HealthKit/HKSleepDay.h>
#import <HealthKit/HKRemoteFeatureAvailabilityRuleSet.h>
#import <HealthKit/_HKAuthorizationRecord.h>
#import <HealthKit/_HKBehavior.h>
#import <HealthKit/HKProcedureRecord.h>
#import <HealthKit/HKRemoteFeatureAvailabilityActiveWatchElectrocardiogramVersionLessThanRule.h>
#import <HealthKit/HKUnknownRecord.h>
#import <HealthKit/HKRemoteFeatureAvailabilityActiveWatchAtrialFibrillationDetectionVersionEqualsRule.h>
#import <HealthKit/_HKSampleQueryUtility.h>
#import <HealthKit/HKAllergyRecord.h>
#import <HealthKit/HKHealthWrapCodableValue.h>
#import <HealthKit/HKSampleCountQuery.h>
#import <HealthKit/_HKSampleCountQueryServerConfiguration.h>
#import <HealthKit/HKJSONVisitor.h>
#import <HealthKit/_HKBackgroundObservationExtensionContext.h>
#import <HealthKit/_HKBackgroundObservationExtensionHostContext.h>
#import <HealthKit/HKNanoSyncPairedDevicesSnapshot.h>
#import <HealthKit/HKNanoSyncPairedDeviceInfo.h>
#import <HealthKit/_HKCompoundFilter.h>
#import <HealthKit/HKHeartRateSummary.h>
#import <HealthKit/_HKWorkoutComparisonFilter.h>
#import <HealthKit/HKMedicationRecordType.h>
#import <HealthKit/HKDeviceQuery.h>
#import <HealthKit/HKSleepQuery.h>
#import <HealthKit/HKVaccinationRecord.h>
#import <HealthKit/HKMedicalDateInterval.h>
#import <HealthKit/HKHeartRateSummaryStatistics.h>
#import <HealthKit/HKHeartRateSummaryWorkoutStatistics.h>
#import <HealthKit/HKHeartRateSummaryWorkoutRecoveryStatistics.h>
#import <HealthKit/HKHeartRateSummaryBreatheStatistics.h>
#import <HealthKit/HKDocumentQuery.h>
#import <HealthKit/_HKDocumentQueryServerConfiguration.h>
#import <HealthKit/HKCalendarCache.h>
#import <HealthKit/_HKDaemonPreferences.h>
#import <HealthKit/_HKWorkoutRouteStore.h>
#import <HealthKit/HKBeatToBeatInstantaneousBPM.h>
#import <HealthKit/HKHeartRateVariabilityUtilities.h>
#import <HealthKit/HKBackgroundObservationExtension.h>
#import <HealthKit/HKConceptRelationship.h>
#import <HealthKit/HKHealthServicesManager.h>
#import <HealthKit/HKMobileCountryCodeManager.h>
#import <HealthKit/HKMobileCountryCode.h>
#import <HealthKit/HKSourceRevision.h>
#import <HealthKit/HKECGOnboardingVersion.h>
#import <HealthKit/_HKFilter.h>
#import <HealthKit/HKOAuth2TokenSession.h>
#import <HealthKit/HKMedicalCoding.h>
#import <HealthKit/HKGymKitMetricsDataSource.h>
#import <HealthKit/_HKObjectComparisonFilter.h>
#import <HealthKit/HKElectrocardiogram.h>
#import <HealthKit/HKInspectableValueInRange.h>
