/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, CADChangeTrackingClientId;

@interface EKChangeTrackingClientId : NSObject {

	NSString* _suffix;
	NSString* _customClientId;

}

@property (nonatomic,copy,readonly) NSString * suffix;                                             //@synthesize suffix=_suffix - In the implementation block
@property (nonatomic,copy,readonly) NSString * customClientId;                                     //@synthesize customClientId=_customClientId - In the implementation block
@property (nonatomic,readonly) CADChangeTrackingClientId * CADChangeTrackingClientId; 
-(id)init;
-(NSString *)suffix;
-(id)initWithSuffix:(id)arg1 ;
-(NSString *)customClientId;
-(id)initWithCustomClientId:(id)arg1 ;
-(id)initWithCustomClientId:(id)arg1 suffix:(id)arg2 ;
-(CADChangeTrackingClientId *)CADChangeTrackingClientId;
@end

