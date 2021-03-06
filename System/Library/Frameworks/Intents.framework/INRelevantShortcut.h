/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, INDefaultCardTemplate, INShortcut;

@interface INRelevantShortcut : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _relevanceProviders;
	INDefaultCardTemplate* _watchTemplate;
	long long _shortcutRole;
	INShortcut* _shortcut;

}

@property (nonatomic,copy) INShortcut * shortcut;                              //@synthesize shortcut=_shortcut - In the implementation block
@property (nonatomic,copy) NSArray * relevanceProviders;                       //@synthesize relevanceProviders=_relevanceProviders - In the implementation block
@property (nonatomic,copy) INDefaultCardTemplate * watchTemplate;              //@synthesize watchTemplate=_watchTemplate - In the implementation block
@property (assign,nonatomic) long long shortcutRole;                           //@synthesize shortcutRole=_shortcutRole - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INShortcut *)shortcut;
-(void)setShortcut:(INShortcut *)arg1 ;
-(id)initWithShortcut:(id)arg1 ;
-(void)setRelevanceProviders:(NSArray *)arg1 ;
-(NSArray *)relevanceProviders;
-(INDefaultCardTemplate *)watchTemplate;
-(void)setWatchTemplate:(INDefaultCardTemplate *)arg1 ;
-(long long)shortcutRole;
-(void)setShortcutRole:(long long)arg1 ;
@end

