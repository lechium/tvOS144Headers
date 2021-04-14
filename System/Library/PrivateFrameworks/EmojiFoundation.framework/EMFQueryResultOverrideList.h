/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface EMFQueryResultOverrideList : NSObject {

	NSDictionary* _overrideMap;

}
-(id)overriddenResultsForQuery:(id)arg1 searchType:(unsigned long long)arg2 ;
-(id)_overriddenResultsRawStringExactMatchForQuery:(id)arg1 ;
-(id)_overriddenResultsRawStringPrefixMatchForQuery:(id)arg1 ;
-(id)_overriddenResultsTokenExactMatchForQuery:(id)arg1 ;
-(id)_overriddenResultsTokenPrefixMatchForQuery:(id)arg1 ;
-(id)_metadataForString:(id)arg1 ;
-(id)_overriddenResultsRawStringExactMatchForRawString:(id)arg1 andSearchType:(unsigned long long)arg2 ;
-(id)initWithOverrideListURL:(id)arg1 ;
-(id)overriddenResultsForQuery:(id)arg1 ;
@end

