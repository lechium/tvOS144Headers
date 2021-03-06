/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CKEncryptedData : NSObject <CKRecordValue, NSCopying, NSSecureCoding> {

	NSData* _data;
	NSData* _encryptedData;

}

@property (nonatomic,copy) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSData * encryptedData;                  //@synthesize encryptedData=_encryptedData - In the implementation block
@property (nonatomic,readonly) BOOL needsEncryption; 
@property (nonatomic,readonly) BOOL needsDecryption; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(void)setData:(NSData *)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(id)CKPropertiesDescription;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSData *)encryptedData;
-(BOOL)needsDecryption;
-(id)initWithEncryptedData:(id)arg1 ;
-(BOOL)needsEncryption;
-(void)setEncryptedData:(NSData *)arg1 ;
@end

