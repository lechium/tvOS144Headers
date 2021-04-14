/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFSpringBoardWebClipMetadata : NSObject <NSSecureCoding> {

	BOOL _appIsInstalled;
	NSString* _shortcutIdentifier;
	NSString* _applicationIdentifier;

}

@property (nonatomic,copy,readonly) NSString * shortcutIdentifier;                 //@synthesize shortcutIdentifier=_shortcutIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL appIsInstalled;                                //@synthesize appIsInstalled=_appIsInstalled - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)applicationIdentifier;
-(NSString *)shortcutIdentifier;
-(id)initWithShortcutIdentifier:(id)arg1 applicationIdentifier:(id)arg2 appIsInstalled:(BOOL)arg3 ;
-(BOOL)appIsInstalled;
@end

