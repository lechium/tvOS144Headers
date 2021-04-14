/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TUCallHistoryManagerDataSource;
@interface TUCallHistoryManager : NSObject {

	id<TUCallHistoryManagerDataSource> _dataSource;

}

@property (nonatomic,readonly) id<TUCallHistoryManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id)init;
-(void)dealloc;
-(id<TUCallHistoryManagerDataSource>)dataSource;
-(id)initWithDataSource:(id)arg1 ;
-(void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithOutgoingLocalParticipantUUID:(id)arg2 ;
-(void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithLocalParticipantUUID:(id)arg2 ;
@end
