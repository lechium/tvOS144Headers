/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RBSXPCSecureCoding.h>

@protocol RBSProcessBundleDataSource;
@class NSDictionary, NSString, RBSProcessInstance;

@interface RBSProcessBundle : NSObject <RBSXPCSecureCoding> {

	NSDictionary* _plistValues;
	NSString* _identifier;
	NSString* _path;
	NSString* _executablePath;
	NSString* _extensionPointIdentifier;
	id<RBSProcessBundleDataSource> _dataSource;
	RBSProcessInstance* _instance;

}

@property (nonatomic,__weak,readonly) id<RBSProcessBundleDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) RBSProcessInstance * instance;                                   //@synthesize instance=_instance - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * path;                                          //@synthesize path=_path - In the implementation block
@property (nonatomic,copy,readonly) NSString * executablePath;                                //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,copy,readonly) NSString * extensionPointIdentifier;                      //@synthesize extensionPointIdentifier=_extensionPointIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
+(id)bundleWithDataSource:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(NSString *)identifier;
-(NSString *)path;
-(NSString *)executablePath;
-(RBSProcessInstance *)instance;
-(id)bundleInfoValueForKey:(id)arg1 ;
-(void)setInstance:(RBSProcessInstance *)arg1 ;
-(id<RBSProcessBundleDataSource>)dataSource;
-(NSString *)extensionPointIdentifier;
-(id)bundleInfoValuesForKeys:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
@end

