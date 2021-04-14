/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMCore/IMBalloonApp.h>

@class NSExtension, LSPlugInKitProxy;

@interface _IMBalloonExtensionApp : IMBalloonApp {

	NSExtension* _extension;
	LSPlugInKitProxy* _proxy;

}

@property (nonatomic,retain) NSExtension * extension;               //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) LSPlugInKitProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
-(id)version;
-(BOOL)isEnabled;
-(id)itemID;
-(id)applicationType;
-(void)setProxy:(LSPlugInKitProxy *)arg1 ;
-(LSPlugInKitProxy *)proxy;
-(BOOL)isLaunchProhibited;
-(void)setIsEnabled:(BOOL)arg1 ;
-(id)plugin;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(BOOL)showInBrowser;
-(BOOL)showableInBrowser;
-(BOOL)isStickerPackOnly;
-(BOOL)isBetaPlugin;
-(id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3 ;
-(id)initWithPluginBundle:(id)arg1 extension:(id)arg2 ;
-(id)initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3 proxy:(id)arg4 ;
@end

