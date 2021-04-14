/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBOpenAppClipCommand.h>
@class NSString, NSData;


@protocol _SFPBOpenAppClipCommand <NSObject>
@property (nonatomic,copy) NSString * clipIdentifier; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;
-(NSString *)clipIdentifier;
-(void)setClipIdentifier:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBOpenAppClipCommand : PBCodable <_SFPBOpenAppClipCommand, NSSecureCoding> {

	NSString* _clipIdentifier;

}

@property (nonatomic,copy) NSString * clipIdentifier;               //@synthesize clipIdentifier=_clipIdentifier - In the implementation block
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
-(NSString *)clipIdentifier;
-(void)setClipIdentifier:(NSString *)arg1 ;
@end

