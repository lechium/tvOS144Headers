/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetAppsUtilities/NetAppsUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NAIdentity;

@interface NAIdentityBuilder : NSObject <NSCopying> {

	NSMutableArray* _characteristics;
	NAIdentity* _builtIdentity;

}

@property (nonatomic,retain) NSMutableArray * characteristics;              //@synthesize characteristics=_characteristics - In the implementation block
@property (nonatomic,retain) NAIdentity * builtIdentity;                    //@synthesize builtIdentity=_builtIdentity - In the implementation block
+(id)builder;
+(id)na_identity;
+(id)builderWithIdentity:(id)arg1 ;
+(id)buildPointerIdentity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)initWithIdentity:(id)arg1 ;
-(id)build;
-(void)setCharacteristics:(NSMutableArray *)arg1 ;
-(NSMutableArray *)characteristics;
-(id)appendCharacteristic:(/*^block*/id)arg1 ;
-(unsigned long long)hashOfObject:(id)arg1 ;
-(BOOL)isObject:(id)arg1 equalToObject:(id)arg2 ;
-(void)setBuiltIdentity:(NAIdentity *)arg1 ;
-(NAIdentity *)builtIdentity;
-(id)appendCharacteristic:(/*^block*/id)arg1 withRole:(long long)arg2 comparatorBlock:(/*^block*/id)arg3 hashBlock:(/*^block*/id)arg4 ;
-(id)appendIntegerCharacteristic:(/*^block*/id)arg1 withRole:(long long)arg2 ;
-(id)appendUnsignedIntegerCharacteristic:(/*^block*/id)arg1 withRole:(long long)arg2 ;
-(id)appendFloatCharacteristic:(/*^block*/id)arg1 withRole:(long long)arg2 ;
-(id)appendDoubleCharacteristic:(/*^block*/id)arg1 withRole:(long long)arg2 ;
-(id)appendRangeCharacteristic:(/*^block*/id)arg1 withRole:(long long)arg2 ;
-(id)appendIntegerCharacteristic:(/*^block*/id)arg1 ;
-(id)appendUnsignedIntegerCharacteristic:(/*^block*/id)arg1 ;
-(id)appendFloatCharacteristic:(/*^block*/id)arg1 ;
-(id)appendDoubleCharacteristic:(/*^block*/id)arg1 ;
-(id)appendRangeCharacteristic:(/*^block*/id)arg1 ;
-(id)appendCharacteristic:(/*^block*/id)arg1 withRole:(long long)arg2 ;
@end

