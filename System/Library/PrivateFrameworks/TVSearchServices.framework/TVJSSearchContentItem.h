/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVSearchServices.framework/TVSearchServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSNumber;


@protocol TVJSSearchContentItem <JSExport>
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * UTSContentType; 
@property (nonatomic,copy,readonly) NSString * URLFormatString; 
@property (nonatomic,copy,readonly) NSNumber * imageHeight; 
@property (nonatomic,copy,readonly) NSNumber * imageWidth; 
@property (nonatomic,copy,readonly) NSString * imagesJSONContentPayload; 
@property (nonatomic,readonly) BOOL isEvod; 
@required
-(NSString *)subtitle;
-(NSNumber *)imageWidth;
-(NSNumber *)imageHeight;
-(BOOL)isEvod;
-(NSString *)UTSContentType;
-(NSString *)URLFormatString;
-(NSString *)imagesJSONContentPayload;

@end

