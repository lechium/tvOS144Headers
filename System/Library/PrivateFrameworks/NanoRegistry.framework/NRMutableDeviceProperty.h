/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRMutableStateBase.h>

@protocol NSObjectNSCopying;
@class NRPBMutableDeviceProperty;

@interface NRMutableDeviceProperty : NRMutableStateBase {

	id<NSObject><NSCopying> _value;
	NRPBMutableDeviceProperty* _protobuf;

}

@property (nonatomic,retain,readonly) id<NSObject><NSCopying> value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NRPBMutableDeviceProperty * protobuf;                //@synthesize protobuf=_protobuf - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)enclosedClassTypes;
+(id)diffFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSObject><NSCopying>)value;
-(void)setValue:(id<NSObject><NSCopying>)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(void)setProtobuf:(NRPBMutableDeviceProperty *)arg1 ;
-(NRPBMutableDeviceProperty *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4 ;
@end

