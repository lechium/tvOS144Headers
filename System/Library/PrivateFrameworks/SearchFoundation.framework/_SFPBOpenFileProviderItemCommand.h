/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBOpenFileProviderItemCommand.h>
@class NSString, NSData;


@protocol _SFPBOpenFileProviderItemCommand <NSObject>
@property (nonatomic,copy) NSString * coreSpotlightIdentifier; 
@property (nonatomic,copy) NSString * fileProviderIdentifier; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;
-(NSString *)coreSpotlightIdentifier;
-(void)setCoreSpotlightIdentifier:(id)arg1;
-(NSString *)fileProviderIdentifier;
-(void)setFileProviderIdentifier:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBOpenFileProviderItemCommand : PBCodable <_SFPBOpenFileProviderItemCommand, NSSecureCoding> {

	NSString* _coreSpotlightIdentifier;
	NSString* _fileProviderIdentifier;

}

@property (nonatomic,copy) NSString * coreSpotlightIdentifier;              //@synthesize coreSpotlightIdentifier=_coreSpotlightIdentifier - In the implementation block
@property (nonatomic,copy) NSString * fileProviderIdentifier;               //@synthesize fileProviderIdentifier=_fileProviderIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(NSString *)coreSpotlightIdentifier;
-(void)setCoreSpotlightIdentifier:(NSString *)arg1 ;
-(NSString *)fileProviderIdentifier;
-(void)setFileProviderIdentifier:(NSString *)arg1 ;
@end

