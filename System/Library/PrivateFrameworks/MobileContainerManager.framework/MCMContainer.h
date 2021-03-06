/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/MobileContainerManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MobileContainerManager/MobileContainerManager-Structs.h>
@class NSString, NSUUID, NSURL, NSDictionary;

@interface MCMContainer : NSObject {

	NSString* _identifier;
	NSUUID* _uuid;
	NSString* _personaUniqueString;
	long long _containerClass;
	container_object_sRef _thisContainer;

}

@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) container_object_sRef thisContainer; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSDictionary * info; 
@property (nonatomic,readonly) long long containerClass; 
@property (nonatomic,readonly) NSString * personaUniqueString; 
@property (getter=isTemporary,nonatomic,readonly) BOOL temporary; 
+(long long)typeContainerClass;
+(id)temporaryContainerWithIdentifier:(id)arg1 existed:(BOOL*)arg2 error:(id*)arg3 ;
+(id)containerWithIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2 existed:(BOOL*)arg3 error:(id*)arg4 ;
+(id)containerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(NSURL *)url;
-(NSString *)personaUniqueString;
-(NSUUID *)uuid;
-(NSDictionary *)info;
-(BOOL)isTemporary;
-(long long)containerClass;
-(void)markDeleted;
-(container_object_sRef)thisContainer;
-(container_object_sRef)getLowLevelContainerObject;
-(id)initWithIdentifier:(id)arg1 path:(id)arg2 uniquePathComponent:(id)arg3 uuid:(id)arg4 personaUniqueString:(id)arg5 error:(id*)arg6 ;
-(id)initWithIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2 existed:(BOOL*)arg3 temp:(BOOL)arg4 error:(id*)arg5 ;
-(id)destroyContainerWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)setInfoValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)infoValueForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)recreateDefaultStructureWithError:(id*)arg1 ;
-(BOOL)regenerateDirectoryUUIDWithError:(id*)arg1 ;
-(unsigned long long)diskUsageWithError:(id*)arg1 ;
-(BOOL)isEqualToContainer:(id)arg1 ;
-(BOOL)_obj1:(id)arg1 isEqualToObj2:(id)arg2 ;
-(void)_errorOccurred;
@end

