/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordID, NSString, NSData;

@interface CKAssetReference : NSObject <NSSecureCoding, NSCopying> {

	CKRecordID* _recordID;
	long long _databaseScope;
	NSString* _fieldName;
	NSData* _fileSignature;

}

@property (assign,nonatomic) long long databaseScope;                    //@synthesize databaseScope=_databaseScope - In the implementation block
@property (nonatomic,copy,readonly) CKRecordID * recordID;               //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy,readonly) NSString * fieldName;                //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,copy,readonly) NSData * fileSignature;              //@synthesize fileSignature=_fileSignature - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)databaseScope;
-(CKRecordID *)recordID;
-(void)setDatabaseScope:(long long)arg1 ;
-(NSString *)fieldName;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSData *)fileSignature;
-(id)initWithExistingRecordID:(id)arg1 databaseScope:(long long)arg2 fieldName:(id)arg3 fileSignature:(id)arg4 ;
@end

