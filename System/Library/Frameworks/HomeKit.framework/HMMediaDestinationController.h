/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMFObject.h>

@protocol HMMediaDestinationControllerDelegate, HMMediaDestinationControllerDataSource;
@class HMFUnfairLock, NSArray, NSUUID, _HMContext, NSString;

@interface HMMediaDestinationController : NSObject <HMFLogging, HMObjectMerge, HMFObject> {

	HMFUnfairLock* _lock;
	NSArray* _availableDestinationIdentifiers;
	NSUUID* _destinationIdentifier;
	id<HMMediaDestinationControllerDelegate> _delegate;
	NSUUID* _identifier;
	id<HMMediaDestinationControllerDataSource> _dataSource;
	_HMContext* _context;

}

@property (__weak) id<HMMediaDestinationControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (retain) _HMContext * context;                                               //@synthesize context=_context - In the implementation block
@property (copy) NSUUID * destinationIdentifier;                                       //@synthesize destinationIdentifier=_destinationIdentifier - In the implementation block
@property (copy) NSArray * availableDestinationIdentifiers;                            //@synthesize availableDestinationIdentifiers=_availableDestinationIdentifiers - In the implementation block
@property (__weak) id<HMMediaDestinationControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSUUID * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSArray * availableDestinations; 
@property (readonly) id<HMMediaDestination> destination; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)shortDescription;
+(id)logCategory;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)dealloc;
-(id<HMMediaDestinationControllerDelegate>)delegate;
-(void)setDelegate:(id<HMMediaDestinationControllerDelegate>)arg1 ;
-(NSUUID *)identifier;
-(NSUUID *)uniqueIdentifier;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(id<HMMediaDestination>)destination;
-(NSString *)shortDescription;
-(id<HMMediaDestinationControllerDataSource>)dataSource;
-(void)setDataSource:(id<HMMediaDestinationControllerDataSource>)arg1 ;
-(NSString *)privateDescription;
-(void)updateDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)logIdentifier;
-(NSArray *)attributeDescriptions;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(NSUUID *)destinationIdentifier;
-(NSArray *)availableDestinationIdentifiers;
-(id)initWithIdentifier:(id)arg1 destinationIdentifier:(id)arg2 availableDestinationIdentifiers:(id)arg3 ;
-(void)callCompletionHandler:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)callCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)availableDestinationIdentifiersIsEqualToIdentifiers:(id)arg1 ;
-(void)notifyDidUpdateDestination;
-(void)notifyDidUpdateAvailableDestinations;
-(void)unconfigure;
-(id)initWithControllerData:(id)arg1 ;
-(void)updateDestination:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)configureWithContext:(id)arg1 dataSource:(id)arg2 ;
-(void)setAvailableDestinationIdentifiers:(NSArray *)arg1 ;
-(void)setDestinationIdentifier:(NSUUID *)arg1 ;
-(NSArray *)availableDestinations;
@end

