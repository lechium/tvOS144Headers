/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, TVContentIdentifier;


@protocol TVJSContentIdentifier <JSExport>
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) TVContentIdentifier * container; 
@required
-(TVContentIdentifier *)container;
-(NSString *)identifier;

@end

