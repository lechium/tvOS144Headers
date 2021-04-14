/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WiFiAvailabilitySource <NSObject>
@property (nonatomic,copy) id changeHandler; 
@property (nonatomic,copy) id relevancyHandler; 
@optional
-(id)candidateNetworks;
-(void)fetchCandidateNetworksMatchingBSSIDs:(id)arg1 completionHandler:(/*^block*/id)arg2;

@required
-(void)setChangeHandler:(/*^block*/id)arg1;
-(id)changeHandler;
-(id)relevancyHandler;
-(id)relevantNetworks;
-(void)setRelevancyHandler:(/*^block*/id)arg1;

@end

