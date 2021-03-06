/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, TUIEmojiSearchSourceDelegate;
@class NSString, NSArray, NSObject, NSLocale, EMFEmojiLocaleData;

@interface TUIEmojiSearchSource : NSObject {

	NSString* _exactQuery;
	NSString* _autocorrectedQuery;
	NSArray* _results;
	NSObject*<OS_dispatch_queue> _searchQueue;
	id<TUIEmojiSearchSourceDelegate> _delegate;
	NSArray* _multilingualSearchLocales;
	NSLocale* _locale;
	EMFEmojiLocaleData* _localeData;

}

@property (nonatomic,retain) NSLocale * locale;                                             //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) EMFEmojiLocaleData * localeData;                               //@synthesize localeData=_localeData - In the implementation block
@property (assign,nonatomic,__weak) id<TUIEmojiSearchSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * results;                                           //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSArray * suggestedEmojis; 
@property (nonatomic,retain) NSArray * multilingualSearchLocales;                           //@synthesize multilingualSearchLocales=_multilingualSearchLocales - In the implementation block
-(id<TUIEmojiSearchSourceDelegate>)delegate;
-(void)setDelegate:(id<TUIEmojiSearchSourceDelegate>)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)initWithLocale:(id)arg1 ;
-(NSArray *)results;
-(EMFEmojiLocaleData *)localeData;
-(void)beginSearchForExactQuery:(id)arg1 autocorrectedQuery:(id)arg2 ;
-(BOOL)shouldSupplyVerbatimResultsFor:(id)arg1 ;
-(id)_filteredTokensIgnoringModifiers:(id)arg1 ;
-(NSArray *)suggestedEmojis;
-(id)_emojiResultSetForExactQuery:(id)arg1 autocorrectedQuery:(id)arg2 ;
-(id)languagesForMultilingualSearch;
-(id)_repeatSearchQuery:(id)arg1 forLocales:(id)arg2 ;
-(void)_deliverResults:(id)arg1 forExactQuery:(id)arg2 autocorrectedQuery:(id)arg3 ;
-(NSArray *)multilingualSearchLocales;
-(void)setMultilingualSearchLocales:(NSArray *)arg1 ;
-(void)setLocaleData:(EMFEmojiLocaleData *)arg1 ;
@end

