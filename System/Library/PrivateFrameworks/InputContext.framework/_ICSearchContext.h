/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface _ICSearchContext : NSObject {

	BOOL _isResponseContextDenylisted;
	BOOL _shouldDisableAutoCaps;
	NSString* _locale;
	NSArray* _recipients;
	NSString* _applicationBundleIdentifier;

}

@property (nonatomic,readonly) NSString * locale;                                   //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) NSArray * recipients;                                //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isResponseContextDenylisted;                    //@synthesize isResponseContextDenylisted=_isResponseContextDenylisted - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableAutoCaps;                          //@synthesize shouldDisableAutoCaps=_shouldDisableAutoCaps - In the implementation block
-(NSString *)locale;
-(NSString *)applicationBundleIdentifier;
-(NSArray *)recipients;
-(id)initWithLocale:(id)arg1 recipients:(id)arg2 applicationBundleIdentifier:(id)arg3 isResponseContextDenylisted:(BOOL)arg4 shouldDisableAutoCaps:(BOOL)arg5 ;
-(BOOL)isResponseContextDenylisted;
-(BOOL)shouldDisableAutoCaps;
@end

