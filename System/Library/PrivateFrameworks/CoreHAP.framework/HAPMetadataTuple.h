/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HAPMetadataTuple : HMFObject {

	NSString* _characteristicType;
	NSString* _serviceType;
	NSString* _index;

}

@property (nonatomic,readonly) NSString * characteristicType;              //@synthesize characteristicType=_characteristicType - In the implementation block
@property (nonatomic,readonly) NSString * serviceType;                     //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) NSString * index;                           //@synthesize index=_index - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)serviceType;
-(NSString *)index;
-(NSString *)characteristicType;
-(id)initWithCharacteristicType:(id)arg1 serviceType:(id)arg2 ;
@end

