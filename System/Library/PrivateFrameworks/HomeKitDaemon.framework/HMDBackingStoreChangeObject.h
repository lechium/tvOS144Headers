/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class HMDBackingStoreModelObject, NSSet;


@protocol HMDBackingStoreChangeObject <NSObject>
@property (nonatomic,readonly) HMDBackingStoreModelObject * change; 
@property (nonatomic,readonly) NSSet * dependentUUIDs; 
@required
-(HMDBackingStoreModelObject *)change;
-(NSSet *)dependentUUIDs;

@end
