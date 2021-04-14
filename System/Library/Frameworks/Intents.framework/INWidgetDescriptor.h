/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Intents/Intents-Structs.h>
@class NSString;

@interface INWidgetDescriptor : NSObject {

	NSString* _extensionBundleIdentifier;
	NSString* _kind;
	NSString* _intentClassName;
	long long _preferredSizeClass;

}

@property (nonatomic,copy,readonly) NSString * extensionBundleIdentifier;              //@synthesize extensionBundleIdentifier=_extensionBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * kind;                                   //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy,readonly) NSString * intentClassName;                        //@synthesize intentClassName=_intentClassName - In the implementation block
@property (nonatomic,readonly) long long preferredSizeClass;                           //@synthesize preferredSizeClass=_preferredSizeClass - In the implementation block
@property (nonatomic,readonly) CGSize preferredSize; 
-(id)description;
-(NSString *)kind;
-(id)initWithExtensionBundleIdentifier:(id)arg1 kind:(id)arg2 intentClassName:(id)arg3 preferredSizeClass:(long long)arg4 ;
-(CGSize)preferredSize;
-(BOOL)supportsIntent:(id)arg1 ;
-(id)_extensionRecordWithError:(id*)arg1 ;
-(NSString *)extensionBundleIdentifier;
-(NSString *)intentClassName;
-(long long)preferredSizeClass;
@end

