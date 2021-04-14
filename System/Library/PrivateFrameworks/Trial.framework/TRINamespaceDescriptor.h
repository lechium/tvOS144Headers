/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL, TRIAppContainer;

@interface TRINamespaceDescriptor : NSObject {

	unsigned _namespaceVersion;
	unsigned _namespaceCompatibilityVersion;
	int _cloudKitContainerId;
	NSString* _namespaceName;
	NSURL* _factorsURL;
	TRIAppContainer* _appContainer;
	NSString* _resourceAttributionIdentifier;

}

@property (nonatomic,readonly) NSString * namespaceName;                              //@synthesize namespaceName=_namespaceName - In the implementation block
@property (nonatomic,readonly) NSURL * factorsURL;                                    //@synthesize factorsURL=_factorsURL - In the implementation block
@property (nonatomic,readonly) TRIAppContainer * appContainer;                        //@synthesize appContainer=_appContainer - In the implementation block
@property (nonatomic,readonly) unsigned namespaceVersion;                             //@synthesize namespaceVersion=_namespaceVersion - In the implementation block
@property (nonatomic,readonly) unsigned namespaceCompatibilityVersion;                //@synthesize namespaceCompatibilityVersion=_namespaceCompatibilityVersion - In the implementation block
@property (nonatomic,readonly) int cloudKitContainerId;                               //@synthesize cloudKitContainerId=_cloudKitContainerId - In the implementation block
@property (nonatomic,readonly) NSString * resourceAttributionIdentifier;              //@synthesize resourceAttributionIdentifier=_resourceAttributionIdentifier - In the implementation block
+(id)loadFromFile:(id)arg1 ;
+(id)loadWithNamespaceName:(id)arg1 fromDirectory:(id)arg2 ;
+(id)descriptorPathForNamespaceName:(id)arg1 fromDirectory:(id)arg2 ;
+(BOOL)removeDescriptorWithNamespaceName:(id)arg1 fromDirectory:(id)arg2 ;
+(id)descriptorsForDirectory:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 ;
-(NSString *)namespaceName;
-(BOOL)saveToDirectory:(id)arg1 ;
-(unsigned)namespaceCompatibilityVersion;
-(id)factorsAbsolutePathAsOwner:(BOOL)arg1 ;
-(unsigned)namespaceVersion;
-(id)initWithNamespaceName:(id)arg1 factorsURL:(id)arg2 appContainer:(id)arg3 namespaceVersion:(unsigned)arg4 namespaceCompatibilityVersion:(unsigned)arg5 cloudKitContainerId:(int)arg6 resourceAttributionIdentifier:(id)arg7 ;
-(NSURL *)factorsURL;
-(TRIAppContainer *)appContainer;
-(int)cloudKitContainerId;
-(NSString *)resourceAttributionIdentifier;
-(BOOL)_isEqualToNamespaceDescriptor:(id)arg1 ;
-(id)initWithNamespaceName:(id)arg1 factorsURL:(id)arg2 namespaceVersion:(unsigned)arg3 namespaceCompatibilityVersion:(unsigned)arg4 ;
-(BOOL)removeFromDirectory:(id)arg1 ;
@end

