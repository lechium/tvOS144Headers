/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DiagnosticsServiceInterface <NSObject>
@required
-(void)getAutoBugCaptureConfiguration:(/*^block*/id)arg1;
-(void)snapshotWithSignature:(id)arg1 duration:(unsigned long long)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 wantsRemoteCase:(BOOL)arg6 reply:(/*^block*/id)arg7;
-(void)startSessionWithSignature:(id)arg1 duration:(unsigned long long)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 wantsRemoteCase:(BOOL)arg6 reply:(/*^block*/id)arg7;
-(void)addToSession:(id)arg1 event:(id)arg2 payload:(id)arg3 reply:(/*^block*/id)arg4;
-(void)addToSession:(id)arg1 events:(id)arg2 payload:(id)arg3 reply:(/*^block*/id)arg4;
-(void)addSignatureContentForSession:(id)arg1 key:(id)arg2 content:(id)arg3 reply:(/*^block*/id)arg4;
-(void)endSession:(id)arg1;
-(void)cancelSession:(id)arg1;
-(void)getDiagnosticPayloadsForSignatures:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getSessionStatisticsWithReply:(/*^block*/id)arg1;
-(void)getCasesListFromIdentifier:(id)arg1 count:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)resetDiagnosticCaseStorageWithReply:(/*^block*/id)arg1;
-(void)resetDiagnosticCaseUsageWithReply:(/*^block*/id)arg1;
-(void)resetAllWithReply:(/*^block*/id)arg1;
-(void)triggerRemoteSessionForSignature:(id)arg1 groupIdentifier:(id)arg2 reply:(/*^block*/id)arg3;
-(void)getExpertSystemsStatus:(/*^block*/id)arg1;
-(void)homeKitResidentDevicesIDSIdentifiersWithReply:(/*^block*/id)arg1;
-(void)purgeAutoBugCaptureFilesWithSubPaths:(id)arg1 reply:(/*^block*/id)arg2;
-(void)uploadCasesWithIdentifiersToCloudKit:(id)arg1;
-(void)uploadRecentCases:(unsigned long long)arg1;
-(void)cloudKitUploadDecisionForCaseIdentifiers:(id)arg1 reply:(/*^block*/id)arg2;
-(void)listCaseSummariesWithIdentifiers:(id)arg1 reply:(/*^block*/id)arg2;
-(void)listCaseSummariesOfType:(id)arg1 fromIdentifier:(id)arg2 count:(unsigned long long)arg3 reply:(/*^block*/id)arg4;
-(void)submitRecentCaseSummariesWithIdentifiers:(id)arg1 reply:(/*^block*/id)arg2;
-(void)submitRecentCaseSummariesWithCount:(unsigned long long)arg1 reply:(/*^block*/id)arg2;

@end

