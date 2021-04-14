/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray;

@interface PKProtobufShareableCredentialMessage : PBCodable <NSCopying> {

	NSString* _dataString;
	NSString* _messageCaption;
	NSData* _passThumbnailImage;
	NSString* _policyIdentifier;
	NSMutableArray* _shareableCredentials;
	unsigned _version;

}

@property (assign,nonatomic) unsigned version;                                   //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSMutableArray * shareableCredentials;              //@synthesize shareableCredentials=_shareableCredentials - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageCaption; 
@property (nonatomic,retain) NSString * messageCaption;                          //@synthesize messageCaption=_messageCaption - In the implementation block
@property (nonatomic,readonly) BOOL hasDataString; 
@property (nonatomic,retain) NSString * dataString;                              //@synthesize dataString=_dataString - In the implementation block
@property (nonatomic,readonly) BOOL hasPolicyIdentifier; 
@property (nonatomic,retain) NSString * policyIdentifier;                        //@synthesize policyIdentifier=_policyIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPassThumbnailImage; 
@property (nonatomic,retain) NSData * passThumbnailImage;                        //@synthesize passThumbnailImage=_passThumbnailImage - In the implementation block
+(Class)shareableCredentialsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)passThumbnailImage;
-(void)setDataString:(NSString *)arg1 ;
-(BOOL)hasDataString;
-(NSString *)dataString;
-(void)addShareableCredentials:(id)arg1 ;
-(unsigned long long)shareableCredentialsCount;
-(void)clearShareableCredentials;
-(id)shareableCredentialsAtIndex:(unsigned long long)arg1 ;
-(void)setMessageCaption:(NSString *)arg1 ;
-(void)setPolicyIdentifier:(NSString *)arg1 ;
-(void)setPassThumbnailImage:(NSData *)arg1 ;
-(BOOL)hasMessageCaption;
-(BOOL)hasPolicyIdentifier;
-(BOOL)hasPassThumbnailImage;
-(NSMutableArray *)shareableCredentials;
-(void)setShareableCredentials:(NSMutableArray *)arg1 ;
-(NSString *)messageCaption;
-(NSString *)policyIdentifier;
@end

