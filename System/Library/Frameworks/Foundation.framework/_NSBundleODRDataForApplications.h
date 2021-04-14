/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/_NSBundleODRDataCommon.h>

@protocol OS_dispatch_group;
@class NSDictionary, NSMutableSet, NSError, NSObject, NSString;

@interface _NSBundleODRDataForApplications : _NSBundleODRDataCommon {

	NSDictionary* _tagToTagState;
	NSMutableSet* _extensionConnections;
	NSError* _stashedError;
	NSObject*<OS_dispatch_group> _initialStateGroup;
	NSString* _rootSandboxPath;

}
-(id)description;
-(void)dealloc;
-(id)initWithBundle:(id)arg1 ;
-(BOOL)assetPacksBecameAvailable:(id)arg1 error:(id*)arg2 ;
-(BOOL)assetPacksBecameUnavailable:(id)arg1 error:(id*)arg2 ;
@end
