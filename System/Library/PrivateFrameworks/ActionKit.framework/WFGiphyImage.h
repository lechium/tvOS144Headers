/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSURL, WFImage, NSDictionary, NSString;

@interface WFGiphyImage : MTLModel <NSSecureCoding, MTLJSONSerializing> {

	NSURL* _url;
	NSURL* _videoURL;
	unsigned long long _fileSize;
	unsigned long long _width;
	unsigned long long _height;
	WFImage* _cachedImage;

}

@property (nonatomic,copy,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSURL * videoURL;                            //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,readonly) unsigned long long fileSize;                      //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) unsigned long long width;                         //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) unsigned long long height;                        //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) WFImage * cachedImage;                              //@synthesize cachedImage=_cachedImage - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)JSONTransformerForKey:(id)arg1 ;
+(id)JSONKeyPathsByPropertyKey;
-(unsigned long long)fileSize;
-(NSURL *)url;
-(unsigned long long)width;
-(unsigned long long)height;
-(NSURL *)videoURL;
-(WFImage *)cachedImage;
-(void)setCachedImage:(WFImage *)arg1 ;
@end

