/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, _MXExtensionProvider, NSExtension, NSDictionary, NSSet;

@interface _MXExtension : NSObject {

	NSString* _identifier;
	_MXExtensionProvider* _provider;

}

@property (nonatomic,readonly) NSExtension * extension; 
@property (assign,nonatomic,__weak) _MXExtensionProvider * provider;                  //@synthesize provider=_provider - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,copy,readonly) NSString * extensionPointIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * attributes; 
@property (nonatomic,copy,readonly) NSDictionary * infoDictionary; 
@property (nonatomic,copy,readonly) NSSet * capabilities; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * containingAppDisplayName; 
+(BOOL)shouldDeserializeCacheItems;
+(void)setShouldDeserializeCacheItems:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)type;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)attributes;
-(NSDictionary *)infoDictionary;
-(void)setProvider:(_MXExtensionProvider *)arg1 ;
-(NSString *)displayName;
-(BOOL)isEnabled;
-(_MXExtensionProvider *)provider;
-(NSSet *)capabilities;
-(NSExtension *)extension;
-(NSString *)extensionPointIdentifier;
-(id)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2 ;
-(id)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)canSupportIntentClass:(Class)arg1 ;
-(id)_containingAppIdentifer;
-(BOOL)_setEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(id)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3 ;
-(id)_iconWithFormat:(int)arg1 ;
-(id)initWithExtensionIdentifier:(id)arg1 extensionProvider:(id)arg2 ;
-(id)confirmIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)handleIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(/*^block*/id)arg3 ;
-(NSString *)containingAppDisplayName;
-(BOOL)_isMapsExtension;
-(BOOL)_isIntentExtension;
-(id)siblingExtensions;
-(id)_iconForTableUI;
-(BOOL)canSupportIntent:(id)arg1 ;
-(void)startExtensionServiceWithInputItems:(id)arg1 begin:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_loadCacheItems:(id)arg1 ;
@end

