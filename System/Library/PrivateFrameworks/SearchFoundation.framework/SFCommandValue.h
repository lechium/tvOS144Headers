/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFCommandValue.h>
@class SFReferentialCommand, NSDictionary, NSData;


@protocol SFCommandValue <NSObject>
@property (nonatomic,retain) SFReferentialCommand * referentialCommand; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;
-(SFReferentialCommand *)referentialCommand;
-(void)setReferentialCommand:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFReferentialCommand, NSDictionary, NSData, NSString;

@interface SFCommandValue : NSObject <SFCommandValue, NSSecureCoding, NSCopying> {

	SFReferentialCommand* _referentialCommand;

}

@property (nonatomic,retain) SFReferentialCommand * referentialCommand;              //@synthesize referentialCommand=_referentialCommand - In the implementation block
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
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(SFReferentialCommand *)referentialCommand;
-(void)setReferentialCommand:(SFReferentialCommand *)arg1 ;
@end

