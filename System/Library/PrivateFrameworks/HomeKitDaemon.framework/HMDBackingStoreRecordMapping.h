/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSUUID;


@protocol HMDBackingStoreRecordMapping <NSObject>
@property (nonatomic,readonly) NSString * recordName; 
@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) NSUUID * parentUuid; 
@property (nonatomic,readonly) NSString * type; 
@required
-(NSString *)type;
-(NSUUID *)uuid;
-(NSString *)recordName;
-(NSUUID *)parentUuid;

@end
