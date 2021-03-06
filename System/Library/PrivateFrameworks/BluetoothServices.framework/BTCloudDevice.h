/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BluetoothServices.framework/BluetoothServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BTCloudDevice : NSObject <NSSecureCoding> {

	NSString* _bluetoothAddress;
	NSString* _manufacturer;
	NSString* _modelNumber;
	NSString* _nickname;
	NSString* _productID;
	NSString* _vendorID;

}

@property (nonatomic,retain) NSString * bluetoothAddress;              //@synthesize bluetoothAddress=_bluetoothAddress - In the implementation block
@property (nonatomic,retain) NSString * manufacturer;                  //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,retain) NSString * modelNumber;                   //@synthesize modelNumber=_modelNumber - In the implementation block
@property (nonatomic,retain) NSString * nickname;                      //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,retain) NSString * productID;                     //@synthesize productID=_productID - In the implementation block
@property (nonatomic,retain) NSString * vendorID;                      //@synthesize vendorID=_vendorID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)deviceWithBluetoothAddress:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(NSString *)productID;
-(NSString *)vendorID;
-(void)setProductID:(NSString *)arg1 ;
-(void)setVendorID:(NSString *)arg1 ;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(NSString *)modelNumber;
-(void)setModelNumber:(NSString *)arg1 ;
-(NSString *)bluetoothAddress;
-(void)setBluetoothAddress:(NSString *)arg1 ;
-(id)initWithBluetoothAddress:(id)arg1 ;
@end

