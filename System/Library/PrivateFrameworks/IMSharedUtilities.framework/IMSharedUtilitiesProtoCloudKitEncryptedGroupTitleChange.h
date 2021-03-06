/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedGroupTitleChange : PBCodable <NSCopying> {

	NSString* _groupTitle;
	NSString* _otherHandle;
	NSData* _padding;
	unsigned _version;
	SCD_Struct_IM7 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupTitle; 
@property (nonatomic,retain) NSString * groupTitle;               //@synthesize groupTitle=_groupTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasOtherHandle; 
@property (nonatomic,retain) NSString * otherHandle;              //@synthesize otherHandle=_otherHandle - In the implementation block
@property (nonatomic,readonly) BOOL hasPadding; 
@property (nonatomic,retain) NSData * padding;                    //@synthesize padding=_padding - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(NSData *)padding;
-(void)setPadding:(NSData *)arg1 ;
-(NSString *)groupTitle;
-(void)setGroupTitle:(NSString *)arg1 ;
-(BOOL)hasPadding;
-(NSString *)otherHandle;
-(void)setOtherHandle:(NSString *)arg1 ;
-(BOOL)hasOtherHandle;
-(BOOL)hasGroupTitle;
@end

