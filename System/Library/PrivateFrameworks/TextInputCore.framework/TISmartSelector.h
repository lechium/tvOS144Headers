/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <TextInputCore/TextInputCore-Structs.h>
@class NSLocale, TITransientLexiconManager, NLTagger, NSObject, NSString;

@interface TISmartSelector : NSObject {

	unique_ptr<KB::StaticDictionary, std::__1::default_delete<KB::StaticDictionary> >* _staticDictionary;
	LXLexiconRef _contactDictionary;
	/*^block*/id _contactObserver;
	unsigned long long _options;
	NSLocale* _locale;
	TITransientLexiconManager* _transientLexiconManager;
	NLTagger* _namedEntityTagger;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _dataChangedHandler;

}

@property (assign) unsigned long long options;                                       //@synthesize options=_options - In the implementation block
@property (retain) NSLocale * locale;                                                //@synthesize locale=_locale - In the implementation block
@property (retain) TITransientLexiconManager * transientLexiconManager;              //@synthesize transientLexiconManager=_transientLexiconManager - In the implementation block
@property (retain) NLTagger * namedEntityTagger;                                     //@synthesize namedEntityTagger=_namedEntityTagger - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> dispatchQueue;                       //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (copy) id dataChangedHandler;                                              //@synthesize dataChangedHandler=_dataChangedHandler - In the implementation block
@property (retain) NSString * language; 
-(void)dealloc;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 language:(id)arg2 dataChangedHandler:(/*^block*/id)arg3 ;
-(NSRange)selectionRangeForTextInDocument:(id)arg1 inRange:(NSRange)arg2 language:(id)arg3 tokenizedRanges:(id)arg4 options:(unsigned long long)arg5 ;
-(NSRange)longestRangeEncapsulatingSubstringInDocument:(id)arg1 containingRange:(NSRange)arg2 tokenizedRanges:(id)arg3 meetingCondition:(/*^block*/id)arg4 ;
-(void)loadStaticPhraseDictionary;
-(NSRange)selectionRangeForTextInDocument:(id)arg1 inRange:(NSRange)arg2 language:(id)arg3 options:(unsigned long long)arg4 ;
-(TITransientLexiconManager *)transientLexiconManager;
-(void)setTransientLexiconManager:(TITransientLexiconManager *)arg1 ;
-(NLTagger *)namedEntityTagger;
-(void)setNamedEntityTagger:(NLTagger *)arg1 ;
-(id)dataChangedHandler;
-(void)setDataChangedHandler:(id)arg1 ;
@end

