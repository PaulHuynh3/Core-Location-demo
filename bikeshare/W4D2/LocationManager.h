//
//  LocationManager.h
//  W4D2
//
//  Created by Paul on 2017-09-26.
//  Copyright © 2017 Paul. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreLocation;

// protocol
@protocol MyLocationManagerDelegate <NSObject>

- (void)passCurrentLocation: (CLLocation*)location;

@end


// location manager interface
@interface LocationManager : NSObject

@property(nonatomic, weak) id<MyLocationManagerDelegate> delegate;

- (void)requestLocationPermissionIfNeeded;

@end
