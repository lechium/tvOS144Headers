/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IMDCKChatSyncCKOperationFactory : NSObject
-(id)_chatSyncOperationGroupWithName:(id)arg1 ;
-(id)_chatFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 ;
-(id)_chatFetchRecordZoneChangesCKConfiguration:(id)arg1 ;
-(id)fetchChatZoneChangesCKOperationUsingToken:(id)arg1 zone:(id)arg2 resultsLimit:(unsigned long long)arg3 groupName:(id)arg4 activity:(id)arg5 ;
-(id)_chatWriteRecordsCKConfiguration:(id)arg1 ;
-(id)_chatSyncOperationGroup;
-(id)fetchChatZoneChangesCKOperationUsingToken:(id)arg1 zone:(id)arg2 resultsLimit:(unsigned long long)arg3 activity:(id)arg4 ;
-(id)saveChatsCKOperationUsingRecordsToSave:(id)arg1 activity:(id)arg2 ;
-(id)deleteChatCKOperationUsingRecordIDstoDelete:(id)arg1 activity:(id)arg2 ;
@end

