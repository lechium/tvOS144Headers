/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFiTunesStoreObject.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSURL, NSString, WFTimeInterval, NSDictionary;

@interface WFiTunesMediaTrackObject : WFiTunesStoreObject <MTLJSONSerializing> {

	BOOL _streamable;
	BOOL _explicit;
	NSURL* _previewURL;
	NSString* _genre;
	WFTimeInterval* _duration;

}

@property (nonatomic,readonly) NSURL * previewURL;                               //@synthesize previewURL=_previewURL - In the implementation block
@property (nonatomic,readonly) NSString * genre;                                 //@synthesize genre=_genre - In the implementation block
@property (nonatomic,readonly) WFTimeInterval * duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL streamable;                                  //@synthesize streamable=_streamable - In the implementation block
@property (nonatomic,readonly) BOOL explicit;                                    //@synthesize explicit=_explicit - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
+(id)durationJSONTransformer;
+(id)explicitJSONTransformer;
+(id)priceJSONTransformer;
-(WFTimeInterval *)duration;
-(NSString *)genre;
-(BOOL)explicit;
-(NSURL *)previewURL;
-(BOOL)streamable;
@end

