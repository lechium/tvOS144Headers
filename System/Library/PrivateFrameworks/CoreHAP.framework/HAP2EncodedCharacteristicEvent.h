/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2EncodedCharacteristicEvent.h>
@class NSNumber;


@protocol HAP2EncodedCharacteristicEvent <NSObject>
@property (nonatomic,readonly) NSNumber * instanceID; 
@property (nonatomic,readonly) id<HAP2AccessoryCharacteristicEncodedData> encodedData; 
@required
-(id<HAP2AccessoryCharacteristicEncodedData>)encodedData;
-(NSNumber *)instanceID;

@end


@protocol HAP2AccessoryCharacteristicEncodedData;
@class NSNumber, NSString;

@interface HAP2EncodedCharacteristicEvent : HAP2LoggingObject <HAP2EncodedCharacteristicEvent> {

	NSNumber* _instanceID;
	id<HAP2AccessoryCharacteristicEncodedData> _encodedData;

}

@property (nonatomic,readonly) NSNumber * instanceID;                                               //@synthesize instanceID=_instanceID - In the implementation block
@property (nonatomic,readonly) id<HAP2AccessoryCharacteristicEncodedData> encodedData;              //@synthesize encodedData=_encodedData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(id)init;
-(id<HAP2AccessoryCharacteristicEncodedData>)encodedData;
-(NSNumber *)instanceID;
-(id)initWithInstanceID:(id)arg1 encodedData:(id)arg2 ;
@end

