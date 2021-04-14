/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, NSString;


@protocol ServiceSession <NSObject>
@property (nonatomic,readonly) NSUUID * sessionID; 
@property (nonatomic,readonly) NSString * serviceType; 
@property (nonatomic,readonly) id<Service> service; 
@property (nonatomic,readonly) NSString * clientID; 
@required
-(NSString *)serviceType;
-(NSUUID *)sessionID;
-(id<Service>)service;
-(NSString *)clientID;

@end
