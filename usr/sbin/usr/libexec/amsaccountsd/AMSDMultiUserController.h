//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSDCloudDataManagerDataSourceDelegate-Protocol.h"
#import "AMSDHomeManagerDataSourceDelegate-Protocol.h"
#import "AMSDPushConsumer-Protocol.h"

@class AMSDCloudDataManager, AMSDHomeManager, NSString;
@protocol AMSDCloudDataContainer;

@interface AMSDMultiUserController : NSObject <AMSDCloudDataManagerDataSourceDelegate, AMSDHomeManagerDataSourceDelegate, AMSDPushConsumer>
{
    AMSDCloudDataManager *_cloudDataManager;	// 8 = 0x8
    AMSDHomeManager *_homeManager;	// 16 = 0x10
}

+ (CDUnknownBlockType)_scheduledRefreshActivityBlock;	// IMP=0x000000010001eb60
+ (_Bool)deviceSupportsMultipleUsers;	// IMP=0x000000010001b5d8
+ (_Bool)deviceCanManageMultiUser;	// IMP=0x000000010001b578
+ (id)sharedController;	// IMP=0x000000010001b2ac
- (void).cxx_destruct;	// IMP=0x000000010001f1ac
@property(readonly, nonatomic) AMSDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) AMSDCloudDataManager *cloudDataManager; // @synthesize cloudDataManager=_cloudDataManager;
- (id)_scheduleRefreshWithOptions:(id)arg1;	// IMP=0x000000010001edb0
- (void)_setRefreshThrottlingDateWithTimeInterval:(double)arg1;	// IMP=0x000000010001ea90
- (void)_setLastSuccessfulRefreshDateWithHomes:(id)arg1;	// IMP=0x000000010001e92c
- (id)_refreshThrottlingDate;	// IMP=0x000000010001e87c
- (_Bool)_refreshShouldUseCloudDataWithHomes:(id)arg1;	// IMP=0x000000010001e5b4
- (id)_isRefreshThrottlingDisabledWithOptions:(id)arg1;	// IMP=0x000000010001e338
- (id)_isCloudDataAvailable;	// IMP=0x000000010001e260
- (_Bool)shouldEnablePushTopic;	// IMP=0x000000010001e244
- (void)handlePushNotification:(id)arg1;	// IMP=0x000000010001e1d8
- (void)dataSource:(id)arg1 didReceiveCloudShare:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001df50
- (void)dataSource:(id)arg1 didChangeWithType:(unsigned long long)arg2;	// IMP=0x000000010001dd5c
- (void)dataSourceDidChange:(id)arg1;	// IMP=0x000000010001dbc8
- (id)refreshWithOptions:(id)arg1;	// IMP=0x000000010001ca20
- (id)performAuthenticationForHomeParticipantRecord:(id)arg1;	// IMP=0x000000010001bee8
- (id)fetchHomeHomeUserPairForAccount:(id)arg1 homeUserIdentifier:(id)arg2;	// IMP=0x000000010001b910
- (id)databaseForHome:(id)arg1 user:(id)arg2;	// IMP=0x000000010001b678
@property(readonly, nonatomic) NSString *pushTopic;
@property(readonly, nonatomic) id <AMSDCloudDataContainer> cloudContainer;
- (id)initWithCloudDataManager:(id)arg1 homeManager:(id)arg2;	// IMP=0x000000010001b208

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
