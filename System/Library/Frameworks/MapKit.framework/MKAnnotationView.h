/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_MKKVOProxyDelegate.h>
#import <libobjc.A.dylib/MKAnnotationRepresentation.h>
#import <libobjc.A.dylib/MKLocatableObject.h>

@protocol MKAnnotation;
@class MKUserLocationAnnotationViewProxy, _MKAnnotationViewAnchor, GEORouteMatch, NSMutableArray, _MKKVOProxy, _MKAnnotationViewCustomFeatureAnnotation, NSString, UIImage, MKCalloutView, UIView, CALayer, _MKStaticMapView, MKUsageCounter, VKAnchorWrapper;

@interface MKAnnotationView : UIView <_MKKVOProxyDelegate, MKAnnotationRepresentation, MKLocatableObject> {

	CLLocationCoordinate2D _presentationCoordinate;
	double _presentationCourse;
	/*^block*/id _presentationCoordinateChangedCallback;
	CLLocationCoordinate2D _coordinate;
	MKUserLocationAnnotationViewProxy* _userLocationProxy;
	double _rotationRadians;
	_MKAnnotationViewAnchor* _anchor;
	GEORouteMatch* _routeMatch;
	double _mapRotationRadians;
	unsigned long long _hiddenReasons;
	NSMutableArray* _hiddenCompletionBlocks;
	double _realAlpha;
	CGPoint _realOffset;
	double _mapPitchRadians;
	SCD_Struct_MK27 _mapDisplayStyle;
	float _selectionPriority;
	_MKKVOProxy* _annotationObserver;
	_MKAnnotationViewCustomFeatureAnnotation* _customFeatureAnnotation;
	BOOL _subclassImplementsAlignmentRectInsets;
	unsigned long long _allowedCalloutEdges;
	BOOL _wantsViewBasedPositioning;
	BOOL _shouldKeepCalloutVisible;
	id<MKAnnotation> _annotation;
	float _displayPriority;
	CGRect _collisionFrame;
	NSString* _clusteringIdentifier;
	UIImage* _image;
	long long _collisionMode;
	MKCalloutView* _calloutView;
	UIView* _leftCalloutAccessoryView;
	UIView* _rightCalloutAccessoryView;
	UIView* _detailCalloutAccessoryView;
	NSString* _reuseIdentifier;
	MKAnnotationView* _clusterAnnotationView;
	unsigned long long _mapType;
	unsigned long long _zIndex;
	CGPoint _centerOffset;
	CGPoint _calloutOffset;
	CGPoint _leftCalloutOffset;
	CGPoint _rightCalloutOffset;
	unsigned long long _dragState;
	long long _calloutStyle;
	struct {
		unsigned pendingSelectionAnimated : 1;
		unsigned disabled : 1;
		unsigned selected : 1;
		unsigned canShowCallout : 1;
		unsigned isHighlighted : 1;
		unsigned canDisplayDisclosureInCallout : 1;
		unsigned canDisplayPlacemarkInCallout : 1;
		unsigned draggable : 1;
		unsigned customTransformApplied : 1;
		unsigned internalTransformApplied : 1;
		unsigned animatingToCoordinate : 1;
		unsigned tracking : 1;
		unsigned pendingOffsetAnimation : 1;
		unsigned pendingHideAnimation : 1;
		unsigned setSelectState : 2;
	}  _flags;
	CALayer* _imageLayer;
	long long _titleVisibility;
	long long _subtitleVisibility;
	BOOL _animatingToCoordinate;
	BOOL _tracking;
	BOOL _pendingSelectionAnimated;
	float _zPriority;
	float _selectedZPriority;
	double _direction;
	_MKStaticMapView* _staticMapView;
	MKUsageCounter* _usageCounter;
	CGPoint _bottomCalloutOffset;
	UIEdgeInsets _annotationTrackingInsets;

}

@property (setter=_setCalloutView:,getter=_calloutView,nonatomic,retain) MKCalloutView * _calloutView;                                           //@synthesize calloutView=_calloutView - In the implementation block
@property (assign,setter=_setPendingSelectionAnimated:,getter=_isPendingSelectionAnimated,nonatomic) BOOL pendingSelectionAnimated;              //@synthesize pendingSelectionAnimated=_pendingSelectionAnimated - In the implementation block
@property (assign,setter=_setStaticMapView:,getter=_staticMapView,nonatomic,__weak) _MKStaticMapView * staticMapView;                            //@synthesize staticMapView=_staticMapView - In the implementation block
@property (getter=_allowedToShowCallout,nonatomic,readonly) BOOL allowedToShowCallout; 
@property (nonatomic,readonly) VKAnchorWrapper * anchor; 
@property (assign,setter=_setUsageCounter:,getter=_usageCounter,nonatomic,__weak) MKUsageCounter * usageCounter;                                 //@synthesize usageCounter=_usageCounter - In the implementation block
@property (setter=_setRouteMatch:,nonatomic,retain) GEORouteMatch * _routeMatch;                                                                 //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,readonly) MKUserLocationAnnotationViewProxy * _userLocationProxy; 
@property (getter=_collisionAlignmentRectInsets,nonatomic,readonly) UIEdgeInsets collisionAlignmentRectInsets; 
@property (getter=_isSelectable,nonatomic,readonly) BOOL selectable; 
@property (getter=_significantBounds,nonatomic,readonly) CGRect significantBounds; 
@property (nonatomic,readonly) CGRect _significantFrame; 
@property (assign,getter=_annotationTrackingInsets,nonatomic) UIEdgeInsets annotationTrackingInsets;                                             //@synthesize annotationTrackingInsets=_annotationTrackingInsets - In the implementation block
@property (assign,setter=_setAllowedCalloutEdges:,getter=_allowedCalloutEdges,nonatomic) unsigned long long allowedCalloutEdges;                 //@synthesize allowedCalloutEdges=_allowedCalloutEdges - In the implementation block
@property (assign,setter=_setBottomCalloutOffset:,getter=_bottomCalloutOffset,nonatomic) CGPoint bottomCalloutOffset;                            //@synthesize bottomCalloutOffset=_bottomCalloutOffset - In the implementation block
@property (assign,setter=_setShouldKeepCalloutVisible:,getter=_shouldKeepCalloutVisible,nonatomic) BOOL shouldKeepCalloutVisible;                //@synthesize shouldKeepCalloutVisible=_shouldKeepCalloutVisible - In the implementation block
@property (assign,setter=_setDirection:,nonatomic) double _direction;                                                                            //@synthesize direction=_direction - In the implementation block
@property (assign,setter=_setPresentationCoordinate:,nonatomic) CLLocationCoordinate2D _presentationCoordinate;                                  //@synthesize presentationCoordinate=_presentationCoordinate - In the implementation block
@property (setter=_setPresentationCoordinateChangedCallback:,nonatomic,copy) id _presentationCoordinateChangedCallback;                          //@synthesize presentationCoordinateChangedCallback=_presentationCoordinateChangedCallback - In the implementation block
@property (assign,setter=_setPresentationCourse:,nonatomic) double _presentationCourse;                                                          //@synthesize presentationCourse=_presentationCourse - In the implementation block
@property (assign,setter=_setAnimatingToCoordinate:,getter=_isAnimatingToCoordinate,nonatomic) BOOL _animatingToCoordinate;                      //@synthesize animatingToCoordinate=_animatingToCoordinate - In the implementation block
@property (assign,setter=_setTracking:,getter=_isTracking,nonatomic) BOOL _tracking;                                                             //@synthesize tracking=_tracking - In the implementation block
@property (assign,setter=_setMapDisplayStyle:,getter=_mapDisplayStyle,nonatomic) SCD_Struct_MK27 mapDisplayStyle;                                //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
@property (assign,setter=_setSelectionPriority:,getter=_selectionPriority,nonatomic) float selectionPriority;                                    //@synthesize selectionPriority=_selectionPriority - In the implementation block
@property (assign,setter=_setMapRotationRadians:,getter=_mapRotationRadians,nonatomic) double mapRotationRadians;                                //@synthesize mapRotationRadians=_mapRotationRadians - In the implementation block
@property (assign,setter=_setMapPitchRadians:,getter=_mapPitchRadians,nonatomic) double mapPitchRadians;                                         //@synthesize mapPitchRadians=_mapPitchRadians - In the implementation block
@property (getter=_collisionFrame,nonatomic,readonly) CGRect collisionFrame;                                                                     //@synthesize collisionFrame=_collisionFrame - In the implementation block
@property (getter=_defaultCollisionAlignmentRectInsets,nonatomic,readonly) UIEdgeInsets defaultCollisionAlignmentRectInsets; 
@property (assign,setter=_setCalloutStyle:,getter=_calloutStyle,nonatomic) long long calloutStyle;                                               //@synthesize calloutStyle=_calloutStyle - In the implementation block
@property (assign,nonatomic) long long titleVisibility;                                                                                          //@synthesize titleVisibility=_titleVisibility - In the implementation block
@property (assign,nonatomic) long long subtitleVisibility;                                                                                       //@synthesize subtitleVisibility=_subtitleVisibility - In the implementation block
@property (nonatomic,readonly) NSString * reuseIdentifier; 
@property (nonatomic,retain) id<MKAnnotation> annotation; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) CGPoint centerOffset; 
@property (assign,nonatomic) CGPoint calloutOffset; 
@property (assign,nonatomic) CGPoint leftCalloutOffset;                                                                                          //@synthesize leftCalloutOffset=_leftCalloutOffset - In the implementation block
@property (assign,nonatomic) CGPoint rightCalloutOffset;                                                                                         //@synthesize rightCalloutOffset=_rightCalloutOffset - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL canShowCallout; 
@property (nonatomic,retain) UIView * leftCalloutAccessoryView;                                                                                  //@synthesize leftCalloutAccessoryView=_leftCalloutAccessoryView - In the implementation block
@property (nonatomic,retain) UIView * rightCalloutAccessoryView;                                                                                 //@synthesize rightCalloutAccessoryView=_rightCalloutAccessoryView - In the implementation block
@property (nonatomic,retain) UIView * detailCalloutAccessoryView;                                                                                //@synthesize detailCalloutAccessoryView=_detailCalloutAccessoryView - In the implementation block
@property (assign,getter=isDraggable,nonatomic) BOOL draggable; 
@property (assign,nonatomic) unsigned long long dragState; 
@property (nonatomic,copy) NSString * clusteringIdentifier;                                                                                      //@synthesize clusteringIdentifier=_clusteringIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) MKAnnotationView * clusterAnnotationView;                                                                  //@synthesize clusterAnnotationView=_clusterAnnotationView - In the implementation block
@property (assign,nonatomic) float displayPriority;                                                                                              //@synthesize displayPriority=_displayPriority - In the implementation block
@property (assign,nonatomic) float zPriority;                                                                                                    //@synthesize zPriority=_zPriority - In the implementation block
@property (assign,nonatomic) float selectedZPriority;                                                                                            //@synthesize selectedZPriority=_selectedZPriority - In the implementation block
@property (assign,nonatomic) long long collisionMode;                                                                                            //@synthesize collisionMode=_collisionMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)_followsTerrain;
+(Class)_mapkitLeafClass;
+(float)_defaultDisplayPriority;
+(BOOL)_wantsViewBasedPositioning;
+(unsigned long long)_zIndex;
+(unsigned long long)_selectedZIndex;
+(Class)calloutViewClass;
+(id)_disclosureCalloutButton;
+(BOOL)_isInitiallyHiddenWhenAdded;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(BOOL)isEnabled;
-(double)alpha;
-(void)prepareForReuse;
-(id<MKAnnotation>)annotation;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isHidden;
-(BOOL)isSelected;
-(BOOL)isPersistent;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setAnnotation:(id<MKAnnotation>)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(BOOL)_isTracking;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)_mapType;
-(double)_direction;
-(GEORouteMatch *)_routeMatch;
-(void)_commonInit;
-(id)_mapView;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setDraggable:(BOOL)arg1 ;
-(VKAnchorWrapper *)anchor;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(id)_containerView;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSString *)reuseIdentifier;
-(void)_setRouteMatch:(id)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_isSelectable;
-(void)_setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(SCD_Struct_MK27)_mapDisplayStyle;
-(void)_setMapDisplayStyle:(SCD_Struct_MK27)arg1 ;
-(float)_selectionPriority;
-(id)viewRepresentation;
-(MKUserLocationAnnotationViewProxy *)_userLocationProxy;
-(MKAnnotationView *)clusterAnnotationView;
-(NSString *)clusteringIdentifier;
-(void)setClusteringIdentifier:(NSString *)arg1 ;
-(void)setDisplayPriority:(float)arg1 ;
-(void)_setHidden:(BOOL)arg1 forReason:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)didMoveToSuperview;
-(id)_vkNavigationPuckMarker;
-(void)_setVKNavigationPuckMarker:(id)arg1 ;
-(void)_setUsageCounter:(id)arg1 ;
-(id)_usageCounter;
-(id)_annotationContainer;
-(UIView *)rightCalloutAccessoryView;
-(UIView *)leftCalloutAccessoryView;
-(UIView *)detailCalloutAccessoryView;
-(BOOL)canShowCallout;
-(void)prepareForDisplay;
-(void)setCollisionMode:(long long)arg1 ;
-(void)setCenterOffset:(CGPoint)arg1 ;
-(void)setCalloutOffset:(CGPoint)arg1 ;
-(void)invalidateCustomFeatureForced:(BOOL)arg1 ;
-(unsigned long long)dragState;
-(BOOL)_shouldShowCalloutIfSelected;
-(void)_unhideForDisplay;
-(void)prepareForSnapshotting;
-(void)_updateAnchorPosition:(CGPoint)arg1 alignToPixels:(BOOL)arg2 ;
-(void)_updateEffectiveZPriority;
-(void)setDragState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg1 ;
-(UIEdgeInsets)_defaultCollisionAlignmentRectInsets;
-(void)setTitleVisibility:(long long)arg1 ;
-(void)setSubtitleVisibility:(long long)arg1 ;
-(void)_didDragWithVelocity:(CGPoint)arg1 ;
-(BOOL)_shouldDeselectWhenDragged;
-(BOOL)isProvidingCustomFeature;
-(id)_effectiveSubtitlesIsCollidable:(BOOL*)arg1 ;
-(CLLocationCoordinate2D)_presentationCoordinate;
-(long long)_calloutStyle;
-(CGPoint)leftCalloutOffset;
-(CGPoint)rightCalloutOffset;
-(BOOL)_shouldKeepCalloutVisible;
-(unsigned long long)_allowedCalloutEdges;
-(MKCalloutView *)_calloutView;
-(CGPoint)calloutOffset;
-(CGPoint)_bottomCalloutOffset;
-(BOOL)isDraggable;
-(float)displayPriority;
-(long long)collisionMode;
-(CGPoint)centerOffset;
-(void)setLeftCalloutOffset:(CGPoint)arg1 ;
-(void)setRightCalloutOffset:(CGPoint)arg1 ;
-(void)_setMapType:(unsigned long long)arg1 ;
-(void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2 ;
-(id)_contentLayer;
-(void)_didUpdatePosition;
-(CGPoint)_draggingDropOffset;
-(CGRect)_significantBounds;
-(void)_setHiddenForOffscreen:(BOOL)arg1 ;
-(void)setCanShowCallout:(BOOL)arg1 ;
-(void)_invalidateCachedCoordinate;
-(UIEdgeInsets)_collisionAlignmentRectInsets;
-(CGRect)_collisionFrame;
-(float)_defaultZPriority;
-(float)_defaultSelectedZPriority;
-(void)_removePopover;
-(id)_getPopover:(id)arg1 ;
-(float)_clampZPriority:(float)arg1 ;
-(void)_setZPriority:(float)arg1 ;
-(void)_setSelectedZPriority:(float)arg1 ;
-(unsigned long long)_zIndex;
-(void)_addAnnotationObservation;
-(void)_removeAnnotationObservation;
-(long long)_effectiveCalloutStyle;
-(BOOL)_allowedToShowCallout;
-(BOOL)shouldShowCallout;
-(void)_showCallout:(BOOL)arg1 ;
-(void)_dismissCallout:(BOOL)arg1 ;
-(id)_presentationCoordinateChangedCallback;
-(void)_invalidateCustomFeatureForced:(BOOL)arg1 coordinates:(CLLocationCoordinate2D*)arg2 count:(unsigned long long)arg3 ;
-(void)_setDragState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setZPriority:(float)arg1 ;
-(float)selectedZPriority;
-(float)zPriority;
-(id)snapshotViewAfterScreenUpdates:(BOOL)arg1 ;
-(void)_performOffsetAnimationIfNeeded;
-(void)_performHideAnimationIfNeeded;
-(void)_setHidden:(BOOL)arg1 forReason:(unsigned long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_userTrackingModeDidChange:(id)arg1 ;
-(unsigned long long)_orientationCount;
-(BOOL)_hasAlternateOrientation;
-(void)_mkObserveValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)_isPendingSelectionAnimated;
-(UIEdgeInsets)_annotationTrackingInsets;
-(void)_mapVisibleCenteringRectChanged;
-(void)setClusterAnnotationView:(MKAnnotationView *)arg1 ;
-(long long)compareForClustering:(id)arg1 ;
-(long long)compareForCollision:(id)arg1 ;
-(void)setSelectedZPriority:(float)arg1 ;
-(void)setDetailCalloutAccessoryView:(UIView *)arg1 ;
-(void)setLeftCalloutAccessoryView:(UIView *)arg1 ;
-(void)setRightCalloutAccessoryView:(UIView *)arg1 ;
-(void)_setMapRotationRadians:(double)arg1 ;
-(void)_setDirection:(double)arg1 ;
-(void)_setPresentationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)_setAnimatingToCoordinate:(BOOL)arg1 ;
-(void)_setTracking:(BOOL)arg1 ;
-(CGRect)_mapkit_visibleRect;
-(CGRect)_significantFrame;
-(void)setDragState:(unsigned long long)arg1 ;
-(BOOL)_canDisplayDisclosureInCallout;
-(void)_setCanDisplayDisclosureInCallout:(BOOL)arg1 ;
-(BOOL)_canDisplayPlacemarkInCallout;
-(void)_setCanDisplayPlacemarkInCallout:(BOOL)arg1 ;
-(void)_setZIndex:(unsigned long long)arg1 ;
-(float)_effectiveZPriority;
-(BOOL)_isHiddenForReason:(unsigned long long)arg1 ;
-(void)_performStateUpdatesIfNeeded;
-(void)_setPositionOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(CGPoint)_offsetToAnnotationView:(id)arg1 ;
-(void)_enableRotationForHeadingMode:(double)arg1 ;
-(void)_transitionTo:(long long)arg1 ;
-(BOOL)_canChangeOrientation;
-(double)_pointsForDistance:(double)arg1 ;
-(void)_updateFromMap;
-(id)_customFeatureAnnotation;
-(BOOL)isCollidingWithAnnotationView:(id)arg1 previouslyCollided:(BOOL)arg2 ;
-(void)_setPresentationCoordinateChangedCallback:(/*^block*/id)arg1 ;
-(double)_presentationCourse;
-(void)_setPresentationCourse:(double)arg1 ;
-(BOOL)_isAnimatingToCoordinate;
-(void)_setCalloutView:(id)arg1 ;
-(void)_setShouldKeepCalloutVisible:(BOOL)arg1 ;
-(void)_setBottomCalloutOffset:(CGPoint)arg1 ;
-(void)_setAllowedCalloutEdges:(unsigned long long)arg1 ;
-(double)_mapRotationRadians;
-(double)_mapPitchRadians;
-(void)_setMapPitchRadians:(double)arg1 ;
-(void)_setSelectionPriority:(float)arg1 ;
-(id)_staticMapView;
-(void)_setStaticMapView:(id)arg1 ;
-(void)_setPendingSelectionAnimated:(BOOL)arg1 ;
-(long long)titleVisibility;
-(long long)subtitleVisibility;
-(void)_setCalloutStyle:(long long)arg1 ;
-(void)setAnnotationTrackingInsets:(UIEdgeInsets)arg1 ;
-(id)_effectiveTitleIsCollidable:(BOOL*)arg1 ;
-(id)customFeatureAnnotation;
-(void)configureCustomFeature:(id)arg1 ;
@end

