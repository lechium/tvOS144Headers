/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTIDSyncEngineDelegate
@required
-(void)accountDidChangeWithUserRecordID:(id)arg1;
-(void)syncEngineDidStartWithError:(id)arg1;
-(id)recordWithID:(id)arg1;
-(void)recordWasSaved:(id)arg1;
-(void)recordWasFailedToSave:(id)arg1;
-(void)recordWasFetched:(id)arg1;
-(void)recordWasDeleted:(id)arg1;

@end
