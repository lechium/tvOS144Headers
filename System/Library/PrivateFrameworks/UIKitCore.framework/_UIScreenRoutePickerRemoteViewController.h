/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <UIKitCore/_UIScreenRoutePickerRemoteViewControllerHost.h>

@protocol NSCopyingNSObject;
@class _UIScreenRoutePickerViewController, NSExtension, NSString;

@interface _UIScreenRoutePickerRemoteViewController : _UIRemoteViewController <_UIScreenRoutePickerRemoteViewControllerHost> {

	_UIScreenRoutePickerViewController* _publicController;
	NSExtension* _extension;
	id<NSCopying><NSObject> _extensionRequestIdentifier;

}

@property (assign,nonatomic,__weak) _UIScreenRoutePickerViewController * publicController;              //@synthesize publicController=_publicController - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                                   //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id<NSCopying><NSObject> extensionRequestIdentifier;                          //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)invalidate;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(void)_dismissViewController;
-(void)setExtensionRequestIdentifier:(id<NSCopying><NSObject>)arg1 ;
-(id<NSCopying><NSObject>)extensionRequestIdentifier;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setPublicController:(_UIScreenRoutePickerViewController *)arg1 ;
-(_UIScreenRoutePickerViewController *)publicController;
@end

