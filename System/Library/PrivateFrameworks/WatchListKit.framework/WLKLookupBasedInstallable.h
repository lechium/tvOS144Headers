/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WatchListKit-Structs.h>
#import <libobjc.A.dylib/WLKInstallable.h>

@class NSString, NSArray, NSURL, AMSLookupItem;

@interface WLKLookupBasedInstallable : NSObject <WLKInstallable> {

	AMSLookupItem* _item;

}

@property (nonatomic,readonly) AMSLookupItem * item;                     //@synthesize item=_item - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSArray * appBundleIDs; 
@property (nonatomic,copy,readonly) NSArray * appAdamIDs; 
@property (nonatomic,copy,readonly) NSURL * appStoreURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(id)init;
-(AMSLookupItem *)item;
-(NSURL *)appStoreURL;
-(id)initWithLookupItem:(id)arg1 ;
-(NSArray *)appAdamIDs;
-(NSArray *)appBundleIDs;
-(id)appIconURLForSize:(CGSize)arg1 ;
@end

