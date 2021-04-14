/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBPerformIntentCommand.h>
@class NSString, NSData;


@protocol _SFPBPerformIntentCommand <NSObject>
@property (nonatomic,copy) NSString * intentMessageName; 
@property (nonatomic,copy) NSString * applicationBundleIdentifier; 
@property (nonatomic,copy) NSData * intentMessageData; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSString *)applicationBundleIdentifier;
-(void)setApplicationBundleIdentifier:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;
-(void)setIntentMessageData:(id)arg1;
-(void)setIntentMessageName:(id)arg1;
-(NSData *)intentMessageData;
-(NSString *)intentMessageName;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBPerformIntentCommand : PBCodable <_SFPBPerformIntentCommand, NSSecureCoding> {

	NSString* _intentMessageName;
	NSString* _applicationBundleIdentifier;
	NSData* _intentMessageData;

}

@property (nonatomic,copy) NSString * intentMessageName;                        //@synthesize intentMessageName=_intentMessageName - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSData * intentMessageData;                          //@synthesize intentMessageData=_intentMessageData - In the implementation block
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
-(NSString *)applicationBundleIdentifier;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(void)setIntentMessageData:(NSData *)arg1 ;
-(void)setIntentMessageName:(NSString *)arg1 ;
-(NSData *)intentMessageData;
-(NSString *)intentMessageName;
@end

