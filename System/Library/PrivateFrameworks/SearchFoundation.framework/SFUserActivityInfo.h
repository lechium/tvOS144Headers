/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFUserActivityInfo.h>
@class NSString, NSURL, NSDictionary, NSData;


@protocol SFUserActivityInfo <NSObject>
@property (assign,nonatomic) int valueType; 
@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSURL * urlValue; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)stringValue;
-(NSString *)key;
-(NSDictionary *)dictionaryRepresentation;
-(void)setKey:(id)arg1;
-(void)setStringValue:(id)arg1;
-(void)setUrlValue:(id)arg1;
-(NSURL *)urlValue;
-(int)valueType;
-(void)setValueType:(int)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDictionary, NSData;

@interface SFUserActivityInfo : NSObject <SFUserActivityInfo, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	int _valueType;
	NSString* _key;
	NSString* _stringValue;
	NSURL* _urlValue;

}

@property (assign,nonatomic) int valueType;                                          //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,copy) NSString * key;                                           //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * stringValue;                                   //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,copy) NSURL * urlValue;                                         //@synthesize urlValue=_urlValue - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSString *)key;
-(NSDictionary *)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setUrlValue:(NSURL *)arg1 ;
-(NSURL *)urlValue;
-(int)valueType;
-(void)setValueType:(int)arg1 ;
-(BOOL)hasValueType;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
@end

