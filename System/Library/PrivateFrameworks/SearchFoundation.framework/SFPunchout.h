/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFPunchout.h>
@class NSString, NSArray, SFUserActivityData, NSDictionary, NSData;


@protocol SFPunchout <NSObject>
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSArray * urls; 
@property (nonatomic,retain) SFUserActivityData * userActivityData; 
@property (nonatomic,copy) NSString * actionTarget; 
@property (assign,nonatomic) BOOL isRunnableInBackground; 
@property (assign,nonatomic) BOOL hasClip; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)name;
-(void)setName:(id)arg1;
-(NSString *)bundleIdentifier;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)label;
-(void)setLabel:(id)arg1;
-(void)setBundleIdentifier:(id)arg1;
-(NSArray *)urls;
-(void)setUrls:(id)arg1;
-(NSString *)actionTarget;
-(NSData *)jsonData;
-(SFUserActivityData *)userActivityData;
-(void)setUserActivityData:(id)arg1;
-(void)setActionTarget:(id)arg1;
-(BOOL)isRunnableInBackground;
-(void)setIsRunnableInBackground:(BOOL)arg1;
-(BOOL)hasClip;
-(void)setHasClip:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, SFUserActivityData, NSDictionary, NSData;

@interface SFPunchout : NSObject <SFPunchout, NSSecureCoding, NSCopying> {

	SCD_Struct_SF9 _has;
	BOOL _isRunnableInBackground;
	BOOL _hasClip;
	NSString* _name;
	NSString* _bundleIdentifier;
	NSString* _label;
	NSArray* _urls;
	SFUserActivityData* _userActivityData;
	NSString* _actionTarget;

}

@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * label;                                         //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSArray * urls;                                           //@synthesize urls=_urls - In the implementation block
@property (nonatomic,retain) SFUserActivityData * userActivityData;                  //@synthesize userActivityData=_userActivityData - In the implementation block
@property (nonatomic,copy) NSString * actionTarget;                                  //@synthesize actionTarget=_actionTarget - In the implementation block
@property (assign,nonatomic) BOOL isRunnableInBackground;                            //@synthesize isRunnableInBackground=_isRunnableInBackground - In the implementation block
@property (assign,nonatomic) BOOL hasClip;                                           //@synthesize hasClip=_hasClip - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)punchoutWithURLs:(id)arg1 ;
+(id)punchoutWithURL:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSArray *)urls;
-(void)setUrls:(NSArray *)arg1 ;
-(id)preferredOpenableURL;
-(NSString *)actionTarget;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(SFUserActivityData *)userActivityData;
-(void)setUserActivityData:(SFUserActivityData *)arg1 ;
-(void)setActionTarget:(NSString *)arg1 ;
-(BOOL)isRunnableInBackground;
-(void)setIsRunnableInBackground:(BOOL)arg1 ;
-(BOOL)hasClip;
-(void)setHasClip:(BOOL)arg1 ;
-(BOOL)canOpenURL:(id)arg1 ;
-(BOOL)hasIsRunnableInBackground;
-(BOOL)hasHasClip;
@end

