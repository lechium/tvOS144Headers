/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface TIZhuyinPunctuationManager : NSObject

@property (readonly) NSDictionary * punctuationMap; 
+(id)shareZhuyinPunctuationManager;
-(NSDictionary *)punctuationMap;
-(id)candidatesFor:(id)arg1 ;
@end

