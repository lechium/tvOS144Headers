/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSITunesStore.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegatePrivate.h>
#import <VideosUI/VideosExtrasJSITunesStore.h>

@protocol VideosExtrasJSITunesStore <JSExport>
@optional
-(void)loadStoreURL:(id)arg1 playOnLaunch:(id)arg2 __JS_EXPORT_AS__loadStoreURL:(id)arg3;

@required
-(void)loadStoreURL:(id)arg1 playOnLaunch:(id)arg2;

@end

#import <libobjc.A.dylib/IKJSITunesStore.h>

@class NSString;

@interface VideosExtrasJSITunesStore : IKJSITunesStore <SKStoreProductViewControllerDelegatePrivate, VideosExtrasJSITunesStore, IKJSITunesStore>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadStoreURL:(id)arg1 playOnLaunch:(id)arg2 ;
@end

